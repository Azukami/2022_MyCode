#include <stdio.h>
int main()
{
    int num;
    int m = 0;//计数变量
    for(num = 2; m < 50; num++ ) {
        int i;
        int isPrime = 1;//是素数时isPrime为1
        int m = 0;//计数变量
        for(i = 2; i < num; i++) {
            if (num % i == 0) {
                isPrime = 0;
                break;
            }
        }
        if(isPrime == 1) {
            printf("%d ", num);
            m++;//输出素数时m自增，m到50时即输出了50个素数
        }
    }
    printf("\n");

    return 0;
}