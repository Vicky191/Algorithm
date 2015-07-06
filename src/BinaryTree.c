/*
 * BinaryTree.c
 *
 *  Created on: Jul 6, 2015
 *      Author: deependra.k
 */
#include <stdio.h>
#include"utils.h"
node *newNode(int data)
{
	node *temp=(node *)malloc(sizeof(node));
	temp->data=data;
	temp->left=NULL;
	temp->right=NULL;
}
void insertNode(node **tree,int data)
{
	if(*tree == NULL)
	{
		*tree=newNode(data);
		return;
	}
	if(data<=(*tree)->data)
	{
		insertNode(&((*tree)->left),data);
	}
	else
		insertNode(&((*tree)->right),data);

}
void printout(node *tree){
	if(tree==NULL)
		return;
	printout(tree->left);
	printf("\n%d \n",tree->data);
	printout(tree->right);
}

void printoutPreOrder(node *tree){
	if(tree==NULL)
		return;
	printf("\n%d \n",tree->data);
	printoutPreOrder(tree->left);
	printoutPreOrder(tree->right);

}

void printoutPostOrder(node *tree){
	if(tree==NULL)
		return;
	printoutPostOrder(tree->left);
	printoutPostOrder(tree->right);
	printf("\n%d \n",tree->data);

}

void mirrorTree(node *tree)
{
	if(tree==NULL)
			return;
	mirrorTree(tree->left);
	mirrorTree(tree->right);
	node *temp = tree->left;
	tree->left = tree->right;
	tree->right = temp;
}
void deleteTree(node *tree){
	if(tree==NULL)
		return;
	deleteTree(tree->left);
	deleteTree(tree->right);
	printf("\n Deleting node: %d", tree->data);
	free(tree);

}

int identicalTrees(node* a, node* b)
{
    /*1. both empty */
    if (a==NULL && b==NULL)
        return 1;

    /* 2. both non-empty -> compare them */
    if (a!=NULL && b!=NULL)
    {
        return
        (
            a->data == b->data &&
            identicalTrees(a->left, b->left) &&
            identicalTrees(a->right, b->right)
        );
    }

    /* 3. one empty, one not -> false */
    return 0;
}
