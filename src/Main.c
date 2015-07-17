#include<stdio.h>
#include"utils.h"
#include"BinaryTree.h"
int main(){
	/* 	int n, dmin;
    Point P[]={{0,0}, {-2,0}, {4,0}, {1,1}, {3,3}, {-2,2}, {5,2}};
    n = (sizeof(P) / sizeof(P[0]));
    printf("N: %d", n);
    dmin=closest_pair_2d(P,n);
    printf("N: %d", dmin);*/
	node *root;
	int i;
	root = NULL;
	insertNode(&root,21);
	insertNode(&root,578);
	insertNode(&root,1);
	insertNode(&root,2);
	insertNode(&root,2341);
	insertNode(&root,2145);
	insertNode(&root,2123);
	insertNode(&root,210);
	insertNode(&root,12);
	insertNode(&root,18);
	insertNode(&root,16);
	printf("Largest BST size %d",largestBST(root));
	//	printoutbfsTree(root);
//	printoutspinaltraversal(root);
//	mirrorTree(root);
	printout(root);
//	test(root);
//	cdlNode *test = treeToList(root);
	/*listHead = */
//			printf("address %p %p", test,test +1);
//	printlist(test);
//	printout(root);
    setbuf(stdout, NULL);
   return 0;
}

