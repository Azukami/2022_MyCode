//�ж��Ƿ��ܱ���֪����<x������������
//���ǲ���Ҫ�ñ�xС����Щ������x�ǲ���������ֻ��Ҫ�ñ�xС������������x�ǲ����������ɡ�
//��Ϊ��������ԱȽ��ٵ�������������ֶ�������������˿��Դ�����ѭ���Ĵ�����
//��Ҫһ�����е��������������ű����ж�x�ǲ���������
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
        {//����������
            printf("i=%d \tcnt=%d\t",i, count);//��ѭ��֮ǰ�����ǰ��i��count��ֵ
            int i;
            for (i=0; i<number; i++) {  //����forѭ������prime���飬��prime����������Ԫ�����
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