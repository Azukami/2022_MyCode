//дһ����������������ȷ����[0,9]��Χ�ڵ�������ͳ��ÿһ�����ֳ��ֵĴ���������-1��ʾ������
#include <stdio.h>
int main(void)
{
    const int number = 10;
    int x;
    int count[number];//count[0]����0�����˶��ٴΣ�count[9]����9������ֳ����˶��ٴ�
    int i;
    for(i = 0; i < number; i++) {//��Ȼ�������飬�����Ҫ���ʵ��ĵط����г�ʼ����
        count[i] = 0;
    }
    scanf("%d", &x);
    while(x != -1) {
        if(x >= 0 && x <= 9) {//����Ч��Χ��
            count[x]++;
        }
        scanf("%d", &x);
    }
    for(i = 0; i < number; i++) {//����ʱҪ���������������
        printf("%d:%d\n", i, count[i]);//���������ֳ����˶��ٴ�
    }
    return 0;
}