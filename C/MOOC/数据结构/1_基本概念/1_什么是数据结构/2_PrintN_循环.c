//д����ʵ��һ������PrintN��ʹ�ô���һ��������ΪN�Ĳ�������˳���ӡ��1��N��ȫ��������
#include <stdio.h>
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
    int i;
    for (i=1; i<=a; i++) {
        printf("%d ", i);
    }
    return 0;
}