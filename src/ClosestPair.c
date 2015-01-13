#include"utils.h"

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

int closest_pair_2d(Point *p,int low,int high)
{


	return 0;

}
