#include <stdio.h>
int main()
{
    int num;
    for (num = 2; num < 100; num++ ) {
        int i;
        int isPrime = 1;
        for (i = 2; i < num; i++) {
            if (num % i == 0) {
                isPrime = 0;
                break;
            }
        }
            if (isPrime == 1) {
                printf("%dÊÇËØÊı¡£\n", num);
        }
    }
    
    return 0;
}