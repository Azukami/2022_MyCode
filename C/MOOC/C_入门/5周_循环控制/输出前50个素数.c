#include <stdio.h>
int main()
{
    int x = 2;
    int m = 0;//��������
    //for(num = 2; m < 50; num++ ) {
    while(m < 50) {
        int i;
        int isPrime = 1;//������ʱisPrimeΪ1
        for(i = 2; i < x; i++) {
            if (x % i == 0) {
                isPrime = 0;
                break;
            }
        }
        if(isPrime == 1) {
            printf("%d\n", x);
            m++;//�������ʱm������m��50ʱ�������50������
        }
        x++;
    }
    printf("\n");

    return 0;
}