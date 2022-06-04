#include <stdio.h>
//计算时间差
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
	
	printf("时间差为%d小时%d分。", hour, minute);
	
	return 0;
}
