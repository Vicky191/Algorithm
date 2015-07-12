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
	if(root == NULL)
			return;
	struct Qnode *temp = (struct Qnode *)newQNode(root);
	if(q->rear == NULL)
	{
		q->front = q->rear = temp;
		return;
	}
	q->rear->next= temp;
	q->rear = temp;

}
node *dequeue(queue *q)
{
	if(q->front == NULL)
		return NULL;
	struct Qnode *temp = q->front;
	q->front = q->front->next;
	if(q->front ==NULL)
		q->rear = NULL;
	node *tempNode = temp->treeNode;
	free(temp);
	return tempNode;
}
void printoutbfsTree(node *root)
{
	queue *q = createQueue();
	if(q==NULL)
		return;
	enqueue(q,root);
	node *tempnode;
	while((tempnode = (node *)dequeue(q))!=NULL)
	{
		printf("%d->",tempnode->data);
		enqueue(q,tempnode->left);
		enqueue(q,tempnode->right);
	}
	free(q);
}
