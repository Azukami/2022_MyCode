#include <stdio.h>
int main(void)
{
    int x;
    scanf("%d", &x);
    int i;
    int isPrime = 1;    //����x������
    for (i = 2; i < x; i++) {
        if (x % i == 0) {
            isPrime = 0;
            break;
        }
    }
    if (isPrime == 1) {
        printf("%d������\n", x);
    } else {
        printf("%d��������\n", x);
    }

    return 0;
}