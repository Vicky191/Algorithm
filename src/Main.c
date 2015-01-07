#include<stdio.h>
#define MAX 50

int main(){

    int merge[MAX],i,n,distance;
    long wait=1000000;
    long k;
    setbuf(stdout, NULL);
    printf("\nEnter the total number of elements: ");
    scanf("%d",&n);
    printf("\nEnter the elements : ");
    for(i=0;i<n;i++){
         scanf("%d",&merge[i]);
    }
    distance = closest_pair_1d(merge,0,n-1);

    printf("\nAfter merge sorting elements are: ");
    for(i=0;i<n;i++){
         printf("%d ",merge[i]);
    }
    printf("\n Number of inversions = : %d"+distance);

   return 0;
}

