#include <stdio.h>
//计算薪水
int main()
{
	const double RATE = 8.25;//每小时的薪水是8.25
	const int STANDARD = 40;//一周的标准工作时间是40小时
	double pay = 0.0;//应付薪水
	int hours;//工作时长
//做输入
	printf("请输入工作的小时数：");
	scanf("%d", &hours);
	printf("\n");
//求薪水
	if (hours > STANDARD){
		pay = STANDARD * RATE + (hours - STANDARD) * (RATE * 1.5);
	} else {
		pay = hours * RATE;
	}
//输出薪水
    printf("应付工资： %f\n", pay);
	return 0;
}
