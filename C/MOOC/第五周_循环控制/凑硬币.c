#include <stdio.h>

int main()
{
    int x;//��ƴ�ս�Ԫ��
    int one, two, five;//1��Ǯ��2��Ǯ��5��Ǯ
    scanf("%d", &x);//������ƴ�ս��
    for(one = 1; one < x*10; one++) {//��������飬��������20��1��
        for(two = 1; two < x*10/2; two++) {//�����2�飬��������10��2��
            for(five = 1; five < x*10/5; five++) {//�����2�飬��������4��5��
                if(one + 2*two + 5*five == x*10) {
                    printf("������%d��1�Ǽ�%d��2�Ǽ�%d��5�ǵõ�%dԪ\n", one, two, five, x);
                }
            }
        }
    }//ͨ��3��forѭ����������
    
    return 0;
}