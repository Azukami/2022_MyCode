//���дһ����������û���������ֵ�ƽ��������������д���ƽ��������
#include <stdio.h>
int main(void)
{
    int x;
    double sum = 0;
    int cnt = 0;
    int number[100];//�����number������������顣���������ÿһ����Ԫ����int������Ĵ�С��100���������������Է�100��int
    scanf("%d", &x);
    while (x != -1) {//whileѭ��������x�Ĳ��϶��룬ֻҪx����-1���Ͱ�������number���������ȥ���Ž�ȥ��λ������cnt�ĵ�����������š�
        number[cnt] = x;//cnt���ϵ�����number����cnt���λ���ϵĵ�Ԫ���� = x
        sum += x;
        cnt++;
        scanf("%d", &x);
    }
    if (cnt > 0) {
        printf("%f\n", sum/cnt);
        int i;//��ѭ��ȥ�������飬��������д���ƽ����������
        for(i = 0; i < cnt; i++) {//��ʱcnt����������������ж��ٸ���
            if (number[i] > sum/cnt) {
                printf("%d", number[i]);
            }
        }
    }
    return 0;
}