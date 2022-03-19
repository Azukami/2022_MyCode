#include <stdio.h>

double f ( int n, int a[] )
{
	int i;
	int j;
	int p = a[0];
	for ( j = 1; j <= n; j = j + 1 )
		for ( i = 1; i <= j; i = i + 1 )
			p = a[i] + a[j];
	return p;
}
