#include <stdio.h>
int main(void)
{
    float inch;
    printf("���������(Ӣ��):");
    scanf("%f", &inch);
    float cm = inch * 2.54;
    printf("��������%f���ס�\n", cm);

    return 0;
}