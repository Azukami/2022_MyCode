#include <stdio.h>
int isPrime(int x);

int main(void)
{
    int x;
    scanf("%d", &x);
    if (isPrime(x)) {
        printf("%d������\n", x);
    } else {
        printf("%d��������\n", x);
    }
    return 0;
}
int isPrime(int x)
{
    int ret = 1;
    int i;
    if (x==1 || (x%2 == 0 && x!= 2)) {  //������ܱ�ĳ��ż��������ô���ض���ż��
        ret = 0;    //ȥ��1�����е�ż��
    }
    for (i=3; i<x; i+=2) {  //�ô�3��ʼ�������������ж�����
        if (x%i == 0) {
            ret = 0;
            break;
        }
    }
    return ret;
}