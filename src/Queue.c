/*
 * Queue.c
 *
 *  Created on: Jul 10, 2015
 *      Author: deependra.k
 */
#include"utils.h"
#include<stdio.h>
queue *createQueue()
{
	queue *temp = (queue *)malloc(sizeof(queue));
	temp->front = NULL;
	temp->rear = NULL;
	return temp;
}

struct Qnode *newQNode(node *root)
{
	struct Qnode *qnode =(struct Qnode*)malloc(sizeof(struct Qnode));
	qnode->treeNode = root;
	qnode->next = NULL;
	return qnode;
}
void enqueue(queue *q,node *root)
{
	struct Qnode *temp = (struct Qnode *)newQNode(root);
	if(q->rear == NULL)
	{
		q->front = q->rear = temp;
		return;
	}
	q->rear->next= temp;
	q->rear = temp;

}
struct Qnode *dequeue(queue *q)
{
	if(q->front == NULL)
		return NULL;
	struct Qnode *temp = q->front;
	q->front = q->front->next;
	if(q->front ==NULL)
		q->rear = NULL;
	return temp;
}
void printoutbfsTree(node *root)
{
	queue *q = createQueue();
	enqueue(q,root);
	struct Qnode *tempnode;
	while((tempnode = (struct Qnode*)dequeue(q))!=NULL)
	{

		printf("%d->",tempnode->treeNode->data);
		enqueue(q,tempnode->treeNode->left);
		enqueue(q,tempnode->treeNode->right);
	}

}
