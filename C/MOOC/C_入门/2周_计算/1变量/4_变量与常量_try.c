//���û��������AMOUNT��ֵ��������ʹ�ù̶��ĳ�ʼֵ
#include <stdio.h>
int main(void)
{
    int amount, price = 0;
    printf("��������ֵ(Ԫ)��");
    scanf("%d", &amount);
    printf("��������(Ԫ)��");
    scanf("%d", &price);

    int change = amount - price;
    printf("����%dԪ��\n", change);

    return 0;
}