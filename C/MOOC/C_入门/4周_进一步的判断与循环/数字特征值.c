#include <stdio.h>

int main()
{
    int number;
    int n;//����
    int m = 1;//��λ
    int a = 0;//��ż��һ��
    int b = 1;//��żһ��
    scanf("%d", &number);
    while (number > 0) {
        n = number % 10;
        number = number / 10;
        m = m + 1;
        if (n % 2 == m % 2) {
            b = a + b;
        }
        b = b * 2;
    }
    printf("%d", b);
    
    return 0;
}