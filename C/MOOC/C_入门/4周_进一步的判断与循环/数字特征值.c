#include <stdio.h>

int main()
{
    int number;
    int n;//数字
    int m = 1;//数位
    int a = 0;//奇偶不一致
    int b = 1;//奇偶一致
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