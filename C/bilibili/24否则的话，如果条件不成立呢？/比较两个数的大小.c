#include <stdio.h>
//�Ƚ��������Ĵ�С
int main()
{
//��ʼ��
	int a,b = 0;
//������������
	printf("����������������");
	scanf("%d %d", &a, &b);
//�Ƚϴ�С
	int max = 0;
	if ( a > b ) {
		max = a;
	} else {
		max = b;
	}
//����������д���Ǹ���
    printf("����Ǹ���%d\n", max);
    
    return 0;
}
