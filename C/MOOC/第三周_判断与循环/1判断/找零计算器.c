#include <stdio.h>

int main()
{
    int amount; /*Ʊ��*/
    int price; /*Ӧ�����*/
    printf("������Ʊ�棺\n");
    scanf("%d", &amount);
    printf("������Ӧ����\n");
    scanf("%d", &price);
    if(amount - price > 0) {
        printf("��Ǹ���������㡣\n");
    } else {
        printf("����%dԪ��\n", amount - price);
    }

    return 0;
}