#include <stdio.h>
int main()
{
    int i;
    scanf("%d", &i);
    int a = i / 16;/*��ȡ�������ֵ�ʮλ16����*/
    int b = i % 16;/*��ȡ�������ֵĸ�λ16����*/
    int c = a * 10 + b;
    printf("%d", c);

    return 0;
}