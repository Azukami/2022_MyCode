//�㷨1�����𲽵����Ͱ���
#include <stdio.h>
void loveYou(int n);
int main()
{
    loveYou(3000);

    return 0;
}
void loveYou(int n) //nΪ�����ģ
{
    int i = 0;
    for(i=0; i<n; i++) {    //ѭ��ÿ�ֶమ��һ��
        printf("I Love You %d.\n", i);
    }
    printf("I Love You More Than %d.\n", n);
}