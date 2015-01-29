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
float bruteForce(Point P[],n)
{
	 float min = 0;
	    for (int i = 0; i < n; ++i)
	        for (int j = i+1; j < n; ++j)
	            if (dist(P[i], P[j]) < min)
	                min = dist(P[i], P[j]);
	    return min;

}
int closestUtil(Point P[], n)
{
	if(n <=3)
		return bruteForce(P,n);
	int mid = n/2;
	    Point midPoint = P[mid];
	    float dl= closestUtil(P,mid);
	    float dr= closestUtil(P+mid,n-mid);

return 0;
}
int closest_pair_2d(Point *P,int n)
{
    qsort(P, n, sizeof(Point), compareX);

    // Use recursive function closestUtil() to find the smallest distance
    return closestUtil(P, n);
	return 0;

}
