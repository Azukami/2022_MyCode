/*Ŀ�꣺��Ӣ��ת��Ϊ����
��ƣ����㹫ʽ��1Ӣ�� = 2.54����
    ����Ӣ�磬�������Ϊ���ף�Ȼ��������Ӧ���
��д��*/
#include <stdio.h>
int main()
{
    double inch = 0.0;//����Ԥ�����Ӣ�����
    printf("������Ӣ�磺");
    scanf("%lf", &inch);
    double cm = inch * 2.54;
    printf("��Ӧ�������ǣ�%fcm��\n", cm);

    return 0;
}