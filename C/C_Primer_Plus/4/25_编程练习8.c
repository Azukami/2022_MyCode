#include <stdio.h>
#define qiyou 3.785
#define licheng 1.609
int main(void)
{
    float yingli;
    printf("请输入旅行的里程:\n");
    scanf("%f", &yingli);
    float jialun;
    printf("请输入消耗的汽油量:\n");
    scanf("%f", &jialun);
    float km = yingli * licheng;
    float L = jialun * qiyou;
    float d = L / (10.0 * km);
    printf("%.1f", d);

    return 0;
}