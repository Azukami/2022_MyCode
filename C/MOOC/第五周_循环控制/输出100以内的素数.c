#include <stdio.h>
int main()
{
    int num = 1;
    int i = 2;
    int isPrime = 1;
    for (num = 1; num < 100; num++ ) {
        for (i = 2; i < num; i++) {
            if (num % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }
    if (isPrime == 1) {
        printf("%dÊÇËØÊı¡£\n", num);
    }

    return 0;
}