#include <stdio.h>
//ʵ��һ������PrintN��ʹ�ô���һ��������ΪN�Ĳ�������˳���ӡ��1��N��ȫ��������
int PrintN(int a);
int main()
{
    int a;
    printf("������һ��������:");
    scanf("%d", &a);
    PrintN(a);

    return 0;
}

int PrintN(int a)
{
    if (a > 0) {
        PrintN(a - 1);
        printf("%d ", a);
    }
    return 0;
}