#include <stdio.h>

int main()
{
	double foot,inch;
	printf("��������������Ǽ��߼��磬����5 7����5��7�硣\n");
	scanf("%lf %lf", &foot, &inch);
	
	double mi = (foot + inch / 12) * 0.3048;
	printf("���������%.2f��", mi);

	return 0;
}
