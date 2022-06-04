//判断是否能被已知的且<x的素数整除。
//我们不需要拿比x小的这些数测试x是不是素数，只需要拿比x小的素数来测试x是不是素数即可。
//因为素数是相对比较少的数，大多数数字都不是素数，因此可以大大减少循环的次数。
//需要一张已有的素数表，根据这张表来判断x是不是素数。
#include <stdio.h>
int isPrime(int x, int knownPrimes[], int numberOfKnownPrimes);

int main(void)
{
    const int number = 100;
    int prime[number];
    int m;
    for(m=0; m<number; m++) {
        if(m=0) {
            prime[m] == 2;
        } else {
            prime[m] == 0;
        }
    }
    int count = 1;
    int i = 3;
    while (count < number) {
        if (isPrime(i, prime, count)) {
            prime[count++] = i;
        }
        {//调试输出语句
            printf("i=%d \tcnt=%d\t",i, count);//在循环之前输出当前的i和count的值
            int i;
            for (i=0; i<number; i++) {  //利用for循环遍历prime数组，将prime数组中所有元素输出
                printf("%d\t", prime[i]);
            }
            printf("\n");
        }
        i++;
    }
    for(i=0; i<number; i++) {
        printf("%d", prime[i]);
        if ((i+1)%5) {
            printf("\t");
        } else {
            printf("\n");
        }
    }

    return 0;
}

int isPrime(int x, int knownPrimes[], int numberOfKnownPrimes)
{
    int ret = 1;
    int i;
    for (i=0; i<numberOfKnownPrimes; i++) {
        if (x % knownPrimes[i] == 0) {
            ret = 0;
            break;
        }
    }
    return ret;
}