/*目标：将英寸转换为厘米
设计：计算公式：1英寸 = 2.54厘米
    输入英寸，将其计算为厘米，然后再做相应输出
编写：*/
#include <stdio.h>
int main()
{
    double inch = 0.0;//创建预输入的英寸变量
    printf("请输入英寸：");
    scanf("%lf", &inch);
    double cm = inch * 2.54;
    printf("相应的厘米是：%fcm。\n", cm);

    return 0;
}