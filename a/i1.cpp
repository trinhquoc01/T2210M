#include <stdio.h>
double TBCLe(int arr[], int n)
{
	double a,S=0;
	int d=0;
	for( int i=0 ; i<n ; i++ )
		if(arr[i]%2!=0)
		{
			S=S+arr[i];
			d++;
		}
	a=double(S/d);
	return a;
}
