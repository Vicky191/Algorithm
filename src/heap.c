/*
 * heap.c
 *
 *  Created on: 01-Jul-2015
 *      Author: Vicky
 */
int heap[100],heapSize;
void init()
{
	heap[0]=-100;
	heapSize=0;
}

void insert(int element)
{
	heapSize++;
	int current = heapSize;
	heap[current] = element;
	while(heap[current/2]>element)
	{
		heap[current] = heap[current/2];
		heap[current/2] = element;
		current = current/2;
	}
}

int extractMin()
{

	int temp = heap[1];
	int temp2;
	heap[1] = heap[heapSize--];
	int i=1;
	int child;
	while((2*i)<=heapSize)
	{
		child=2*i;
		if((child!=heapSize)&&heap[child+1]<heap[child] )
			child++;
		if (heap[child] < heap[i]) {
			temp2 = heap[i];
			heap[i] = heap[child];
			heap[child] = temp2;
			i = child;
		} else
			break;

	}
	return temp;

}

void display()
{
	int i;
	printf("\nArray is : \n");
	for(i=1;i<=heapSize;i++)
		printf("%d \n",heap[i]);
}
