#include <stdio.h>
//����ʱ���
int main()
{
	int hour1, minute1;
	int hour2, minute2;
	
	scanf("%d %d", &hour1, &minute1);
	scanf("%d %d", &hour2, &minute2);
	
	int hour = hour1 - hour2;
	int minute = minute1 - minute2;
	if (minute < 0) {
		hour = hour - 1;
		minute = minute + 60;
	}
	
	printf("ʱ���Ϊ%dСʱ%d�֡�", hour, minute);
	
	return 0;
}
