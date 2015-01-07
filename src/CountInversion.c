/*
 * CountInversion.c
 *
 *  Created on: 03-Jan-2015
 *      Author: Vicky
 */
int inversion_mergeSort(int arr[],int low,int mid,int high);
int inversion_partition(int arr[],int low,int high);
#define MAX 50
int inversion_partition(int arr[],int low,int high){

   int mid;
   int x,y,z;

   if(low<high){
        mid=(low+high)/2;
      x =  inversion_partition(arr,low,mid);
      y =  inversion_partition(arr,mid+1,high);
      z = inversion_mergeSort(arr,low,mid,high);
      return x+y+z;
   }
   return 0;
}

int inversion_mergeSort(int arr[],int low,int mid,int high){

   int i,m,k,l,temp[MAX];
   int count=0;

   l=low;
   i=low;
   m=mid+1;

   while((l<=mid)&&(m<=high)){

        if(arr[l]<=arr[m]){
            temp[i]=arr[l];
            l++;
        }
        else{
            temp[i]=arr[m];
            m++;
            count = count+mid-l+1;
        }
        i++;
   }

   if(l>mid){
        for(k=m;k<=high;k++){
            temp[i]=arr[k];
            i++;
        }
   }
   else{
        for(k=l;k<=mid;k++){
            temp[i]=arr[k];
            i++;
        }
   }

   for(k=low;k<=high;k++){
        arr[k]=temp[k];
   }
   return count;
}
