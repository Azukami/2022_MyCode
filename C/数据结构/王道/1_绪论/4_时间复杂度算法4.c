//�㷨4�������������Ͱ���
#include <stdio.h>
void loveYou(int flag[], int n);    //nΪ�����ģ
int main()
{
    int n = 300;
    int flag[n];
    int i;
    for(i=1; i<=n; i++) {       //flag�����д����1~n��Щ��
        flag[i] = i;
    }
    loveYou(flag, n);

    return 0;
}
void loveYou(int flag[], int n)
{
    printf("I Am Iron Man.\n");
    for (int i=0; i<n; i++) {   //�������һ��Ԫ�ؿ�ʼ����
        if(flag[i] == n) {
            printf("I Love You %d.\n", n);
            break;              //�ҵ�����������ѭ��
        }
    }
}