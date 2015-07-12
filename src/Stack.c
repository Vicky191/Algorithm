/*
 * Stack.c
 *
 *  Created on: 11-Jul-2015
 *      Author: Vicky
 */
#include"utils.h"
#include<stdio.h>
stackNode *newStackNode(node *root)
{
	stackNode *temp = (stackNode *)malloc(sizeof(stackNode));
	temp->treeNode = root;
	temp->next = NULL;
}
void push(stackNode **s,node *root)
{
	if(root==NULL)
		return;
	stackNode *temp=newStackNode(root);
	temp->next = *s;
	*s = temp;
}

node *pop(stackNode **s)
{
	if(*s == NULL)
		return NULL;
	stackNode *temp = *s;
	*s = (*s)->next;
	node *tempNode = temp->treeNode;
	free(temp);
	return tempNode;
}

void printoutspinaltraversal(node *root)
{
	stackNode *s1 ,*s2;
	push(&s1,root);
	s2 = NULL;
	node *temp;
	while((s1!=NULL )||(s2!=NULL))
	{
		while(s1!=NULL)
		{
			temp = pop(&s1);
			printf("%d->",temp->data);
			push(&s2,temp->right);
			push(&s2,temp->left);
		}
		while(s2!=NULL)
		{
			temp = pop(&s2);
			printf("%d->",temp->data);
			push(&s1,temp->left);
			push(&s1,temp->right);
		}

	}
}
