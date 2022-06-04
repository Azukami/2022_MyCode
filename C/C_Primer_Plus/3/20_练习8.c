#include <stdio.h>
int main(void)
{
    float cup;
    printf("请输入杯数:");
    scanf("%f", &cup);
    float pt = cup * 2.0;
    printf("对应的品脱为%f\n", pt);
    float ans = cup / 8.0;
    printf("对应的盎司为%f\n", ans);
    float ts = ans / 2.0;
    printf("对应的汤勺为%f\n", ts);
    float cs = ts / 3.0;
    printf("对应的茶勺为%f\n", cs);

    return 0;
}