#include"utils.h"
int compareX(const void* a, const void* b)
{
    Point *p1 = (Point *)a,  *p2 = (Point *)b;
    return (p1->x - p2->x);
}

int compareY(const void* a, const void* b)
{
    Point *p1 = (Point *)a,   *p2 = (Point *)b;
    return (p1->y - p2->y);
}
int closest_pair_1d(int *p,int low,int high)
{
	int i=0,d,temp;
	partition(p,low,high);
	d=p[1]-p[0];
	for(i=1;i<high;i++)
	{
		temp=p[i+1]-p[i];
		if(temp<d)
		{
			d=temp;
		}
	}
	return d;



}
int closestUtil(Point Px[], Py[], n);
int closest_pair_2d(Point *P,int n)
{
    Point Px[n];
    Point Py[n];
    for (int i = 0; i < n; i++)
    {
        Px[i] = P[i];
        Py[i] = P[i];
    }

    qsort(Px, n, sizeof(Point), compareX);
    qsort(Py, n, sizeof(Point), compareY);

    // Use recursive function closestUtil() to find the smallest distance
    return closestUtil(Px, Py, n);
	return 0;

}
