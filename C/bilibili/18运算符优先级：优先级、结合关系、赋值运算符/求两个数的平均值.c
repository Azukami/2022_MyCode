#include <stdio.h>

int main()
{
	int number1,number2 = 0;
	
	printf("������������������\"1 2\"��������ʽ����\n");
	scanf("%d %d", &number1, &number2);
	
	double number3 = (number1 + number2) / 2.0;
	printf("����������ƽ��ֵΪ%lf", number3);
	
	return 0;
}
