#include <stdio.h>

int main()
{
    int num;
    num = 2;//��2��ʼ�������
    int m = 0;//��������

    while( m < 50 ) {//����δ֪������ѭ������whileѭ��
        int i;
        int isPrime = 1;//num������
        for (i = 2; i < num; i++) {
            if (num % i == 0) {
                isPrime = 0;
                break;//��num���Ա�i��������num��������
            }
        }
        if (isPrime == 1) {//��isPrimeΪ1ʱ����num�����������num
            printf("%d ", num);
            m++;//m������m����50ʱ����ѭ�����Ӷ�������ǰ50������
        }
        num++;//num�����������������ļ���
    }
    printf("\n");

    return 0;
}