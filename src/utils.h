/*
 * utils.h
 *
 *  Created on: Jan 7, 2015
 *      Author: deependra.k
 */

#ifndef UTILS_H_
#define UTILS_H_
#define MAX 50
struct P
{
    int x, y;
};
typedef struct P Point;
struct TreeNode{
	int data;
	struct TreeNode *left;
	struct TreeNode *right;
};
typedef struct TreeNode node;
struct CircularDoublyList{
	int data;
	struct CircularDoublyList *prev;
	struct CircularDoublyList *next;
};
typedef struct CircularDoublyList cdlNode;
struct Qnode{
	node *treeNode;
	struct 	Qnode *next;
};
struct Queue
{
	struct Qnode *front;
	struct Qnode *rear;
};
typedef struct Queue queue;
struct Snode{
	node *treeNode;
	struct Snode *next;
};
typedef struct Snode stackNode;


#endif /* UTILS_H_ */
