#include<stdio.h>
#include"utils.h"
int main(){
	int n, dmin;
    Point P[]={{0,0}, {-2,0}, {4,0}, {1,1}, {3,3}, {-2,2}, {5,2}};
    n = (sizeof(P) / sizeof(P[0]));
    printf("N: %d", n);
    dmin=closest_pair_2d(P,n);
    printf("N: %d", dmin);
    setbuf(stdout, NULL);
   return 0;
}

