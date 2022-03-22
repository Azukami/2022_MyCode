#include <stdio.h>
int main()
{
    int num;
    for (num = 2; num < 100; num++ ) {
        int i;
        int isPrime = 1; //num是素数
        //i和isPrime要定义在循环体中，否则会只输出2和3这俩个素数
        for (i = 2; i < num; i++) {
            if (num % i == 0) {
                isPrime = 0;
                break;
            }
        }
        if(isPrime == 1) {
            printf("%d ", num);
        }
    }
    printf("\n");

    return 0;
}