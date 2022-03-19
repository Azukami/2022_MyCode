#include <stdio.h>

int main()
{
	printf("请输入两个时间，每个时间分别输入小时和分钟的值\n");

	int hour1,hour2;
	int minute1,minute2;
	
	scanf("%d %d", &hour1, &minute1);
	scanf("%d %d", &hour2, &minute2);
	
	int time1 = hour1 * 60 + minute1;
	int time2 = hour2 * 60 + minute2;
	
	int time = time1 - time2;
	int hour = time / 60;
	int minute = time % 60;
	
	printf("时间差是：%d小时%d分钟。", hour, minute);
	
	return 0;
}
