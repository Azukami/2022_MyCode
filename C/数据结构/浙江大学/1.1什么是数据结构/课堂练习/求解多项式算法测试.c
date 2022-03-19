#include <stdio.h>
#include <math.h>
#include <time.h>

double f1 ( int n, double a[], double x )
{
	int i;
	double p = a[0];
	for ( i = 1; i <= n; i = i + 1 )
		p = p + (a[i] * pow(x, i));
	return p;
}
double f2 ( int n, double a[], double x )
{
	int i;
	double p = a[n];
	for ( i = n; i > 0; i = i - 1)
		p = a[i-1] + x * p;
	return p;
}
clock_t start, stop;
double duration;
#define MAXN 10  /* ����ʽ���������������ʽ����+1 */
#define MAXK 1e5 /* ���⺯������ظ����ô��� */
double f1 ( int n, double a[], double x );
double f2 ( int n, double a[], double x );

int main()
{
	int i;
	double a[MAXN]; /* �������ʽ��ϵ�� */
	for ( i = 0; i < MAXN; i = i + 1 )
	a[i] = (double)i;
	
	start = clock();
	for ( i = 0; i<MAXK; i=i+1 ) /* �ظ����ú����Ի�ó�ֶ��ʱ������ */
		f1(MAXN-1, a, 1.1);
	stop = clock();
	duration = ((double) (stop - start)) / CLK_TCK / MAXK; /*���㺯���������е�ʱ�� */
	printf("ticks1 = %f\n", (double)(stop - start));
	printf("duration1 = %6.2e\n", duration);

	start = clock();
	for ( i = 0; i < MAXK; i = i + 1) /*�ظ����ú����Ի�ó�ֶ��ʱ������ */
		f2(MAXN-1, a, 1.1);
	stop = clock();
	duration = ((double) (stop - start)) / CLK_TCK / MAXK;/*���㺯���������е�ʱ�� */
	printf("ticks2 = %f\n", (double)(stop - start));
	printf("duration2 = %6.2e\n", duration);

	return 0;
}
