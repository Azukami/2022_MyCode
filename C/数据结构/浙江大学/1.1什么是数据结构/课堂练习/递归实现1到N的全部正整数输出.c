#include <stdio.h>
#include <stdlib.h>

void PrintN ( int N )
{
	if ( N ) {
		PrintN( N - 1 );
		printf("%d ", N );
	}
	return;
}
void PrintN ( int N );
int main ()
{
	int N;
	scanf("%d", &N);
	PrintN( N );
	return 0;
}
