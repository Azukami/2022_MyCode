#include <stdio.h>
//����нˮ
int main()
{
	const double RATE = 8.25;//ÿСʱ��нˮ��8.25
	const int STANDARD = 40;//һ�ܵı�׼����ʱ����40Сʱ
	double pay = 0.0;//Ӧ��нˮ
	int hours;//����ʱ��
//������
	printf("�����빤����Сʱ����");
	scanf("%d", &hours);
	printf("\n");
//��нˮ
	if (hours > STANDARD){
		pay = STANDARD * RATE + (hours - STANDARD) * (RATE * 1.5);
	} else {
		pay = hours * RATE;
	}
//���нˮ
    printf("Ӧ�����ʣ� %f\n", pay);
	return 0;
}
