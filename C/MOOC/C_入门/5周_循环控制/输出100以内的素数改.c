#include <stdio.h>
int main()
{
    int num;
    for (num = 2; num < 100; num++ ) {
        int i;
        int isPrime = 1; //num������
        //i��isPrimeҪ������ѭ�����У������ֻ���2��3����������
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