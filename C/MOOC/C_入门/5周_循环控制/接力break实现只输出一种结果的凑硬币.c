#include <stdio.h>

int main()
{
    int x;//��ƴ�ս�Ԫ��
    int one, two, five;//1��Ǯ��2��Ǯ��5��Ǯ
    int exit = 0;//���
    scanf("%d", &x);//������ƴ�ս��
    for(one = 1; one < x*10; one++) {
        for(two = 1; two < x*10/2; two++) {
            for(five = 1; five < x*10/5; five++) {
                if(one*1 + two*2 + five*5 == x*10) {
                    printf("������%d��1�Ǻ�%d��2�Ǻ�%d��5�Ǵճ�%dԪǮ\n", one, two, five, x);
                    exit = 1;//����˳�
                    break;//ֻ���һ��������Ͻ��
                }
            }
            if(exit == 1) break;
        }
        if(exit == 1) break;//if(exit)�൱��if(exit == 1)
    }

    return 0;
}