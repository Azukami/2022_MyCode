#include <stdio.h>
int main(void)
{
    double price;

    printf("�������Ԫ����");
    scanf("%lf", &price);

    double change = 100.0 - price;

    printf("����%.3lfԪ��\n", change);

    return 0;
}