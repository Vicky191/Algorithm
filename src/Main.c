#include<stdio.h>
#include"utils.h"
int main(){
	/* 	int n, dmin;
    Point P[]={{0,0}, {-2,0}, {4,0}, {1,1}, {3,3}, {-2,2}, {5,2}};
    n = (sizeof(P) / sizeof(P[0]));
    printf("N: %d", n);
    dmin=closest_pair_2d(P,n);
    printf("N: %d", dmin);*/
	init();
	insert(2);
	insert(1);
	insert(5);
	insert(12);
	insert(81);
	insert(6);
	insert(9);
	insert(4);
	insert(41);
	insert(54);
	insert(14);
	insert(576);
	display();
	printf("Min is :%d \n", extractMin());
	display();
    setbuf(stdout, NULL);
   return 0;
}

