#include <stdio.h>
int main(void)
{
    double m = 3.0e-23;
    long sing = 950 / m;
    int num;
    printf("������ˮ�Ŀ�����:");
    scanf("%d", &num);
    unsigned int number = num * sing;
    printf("��%u��ˮ���ӡ�\n", number);

    return 0;
}