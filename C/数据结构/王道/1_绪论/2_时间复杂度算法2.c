//�㷨2����Ƕ��ѭ���Ͱ���
#include <stdio.h>
void loveYou(int n);    //nΪ�����ģ
int main()
{
    loveYou(300);

    return 0;
}
void loveYou(int n)
{
    int i = 0;  //����ĳ̶�
    while (i<n) {
        i++;
        printf("I Love You %d.\n", i);
        for (int j=0; i<n; j++) {   //Ƕ������ѭ��
            printf("I am Iron Man.\n");
        }
    }
    printf("I Love You More Than %d.\n", n);
}