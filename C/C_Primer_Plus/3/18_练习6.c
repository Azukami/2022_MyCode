#include <stdio.h>
int main(void)
{
    double m = 3.0e-23;
    long sing = 950 / m;
    int num;
    printf("请输入水的夸脱数:");
    scanf("%d", &num);
    unsigned int number = num * sing;
    printf("有%u个水分子。\n", number);

    return 0;
}