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

#endif /* UTILS_H_ */
