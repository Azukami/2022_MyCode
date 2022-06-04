#include <stdio.h>
int main()
{
    int x = 2;
    int m = 0;//计数变量
    //for(num = 2; m < 50; num++ ) {
    while(m < 50) {
        int i;
        int isPrime = 1;//是素数时isPrime为1
        for(i = 2; i < x; i++) {
            if (x % i == 0) {
                isPrime = 0;
                break;
            }
        }
        if(isPrime == 1) {
            printf("%d\n", x);
            m++;//输出素数时m自增，m到50时即输出了50个素数
        }
        x++;
    }
    printf("\n");

    return 0;
}