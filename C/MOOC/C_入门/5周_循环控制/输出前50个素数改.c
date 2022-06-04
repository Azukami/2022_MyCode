#include <stdio.h>

int main()
{
    int num;
    num = 2;//从2开始输出素数
    int m = 0;//计数变量

    while( m < 50 ) {//对于未知次数的循环采用while循环
        int i;
        int isPrime = 1;//num是素数
        for (i = 2; i < num; i++) {
            if (num % i == 0) {
                isPrime = 0;
                break;//当num可以被i整除表明num不是素数
            }
        }
        if (isPrime == 1) {//当isPrime为1时表明num是素数，输出num
            printf("%d ", num);
            m++;//m自增，m到达50时跳出循环，从而完成输出前50个素数
        }
        num++;//num自增，以满足素数的检索
    }
    printf("\n");

    return 0;
}