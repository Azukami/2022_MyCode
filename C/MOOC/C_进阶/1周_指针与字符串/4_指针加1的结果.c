//��һ��ָ���1��ʾҪ��ָ��ָ����һ������
//���ָ�벻��ָ��һƬ��������Ŀռ䣬�����飬����������û������
#include <stdio.h>
int main(void)
{
    char ac[] = {88,1,2,3,4,5,6,7,8,9,};
    char *p = ac;   //ָ��pָ��������ac�ĵ�һ����Ԫ��
    char *p1 = &ac[5];

    printf("p  =%p\n", p);
    printf("p+1=%p\n", p+1);
    printf("p1-p=%d\n", p1-p);

    int ai[] = {32,1,2,3,4,5,6,7,8,9,};
    int *q = ai;   //ָ��qָ��������ai�ĵ�һ����Ԫ��
    int *q1 = &ai[6];

    printf("q  =%p\n", q);
    printf("q+1=%p\n", q+1);
    printf("q1-q=%d\n", q1-q);

    return 0;
}