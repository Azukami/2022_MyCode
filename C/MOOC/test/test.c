#include <stdio.h>

int main()
{
    int num;//�ж�num�Ƿ�������
    scanf("%d", &num);
    int i;
    int isPrime = 1;//��isPrimeΪ1ʱ������num������
//��isPrimeһ��ʼΪ1����Ϊ���ֵ�������Ҫʹ����Ϊ0����������ʱ��Ҫ֤α������֤��
    for(i = 2; i < num; i++ ) {
        /*num % i;
        if (num % i != 0 ){
            printf("%d��������\n", num);//�ᵼ���ظ����
        } else {
            printf("%d����������\n", num);//�ᵼ���ظ����
        }*///�����Ҫ��ѭ�����п��ƣ����ñ���isPrime������num�Ƿ�������
        if ( num % i == 0) {
            isPrime = 0;//num���Ա���1�ͱ��������������������num������������ʱ��isPrime��Ϊ0��ʾnum��������
        }
    }
    
    if ( isPrime == 1 ) {
        printf("%d������\n", num);
    } else {
        printf("%d��������\n", num);
    }
    
    return 0;
}