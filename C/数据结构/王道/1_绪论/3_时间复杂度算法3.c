//�㷨3����ָ�������Ͱ���
#include <stdio.h>
void loveYou(int n);
int main()
{
    loveYou(300);

    return 0;
}
void loveYou(int n) //nΪ�����ģ
{
    int i = 1;  //iΪ����ĳ̶�
    while(i<=n) {
        i = i*2;    //ÿ�η���
        printf("I love You %d.\n", i);
    }
    printf("I Love You More Than %d.\n", n);
}