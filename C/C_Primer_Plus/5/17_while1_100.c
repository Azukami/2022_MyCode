#include <stdio.h>
//����������ʹ��whileѭ������1 + 2 + 3 + ���� + 100�Ľ���Ƕ���
int main(void)
{
    int num = 1;
    int sum = 0;
    while(num <= 100)
    {
        sum = sum + num;
        num = num + 1;
    }
    printf("sum = %d", sum);

    return 0;
}