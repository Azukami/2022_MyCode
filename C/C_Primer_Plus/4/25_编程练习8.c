#include <stdio.h>
#define qiyou 3.785
#define licheng 1.609
int main(void)
{
    float yingli;
    printf("���������е����:\n");
    scanf("%f", &yingli);
    float jialun;
    printf("���������ĵ�������:\n");
    scanf("%f", &jialun);
    float km = yingli * licheng;
    float L = jialun * qiyou;
    float d = L / (10.0 * km);
    printf("%.1f", d);

    return 0;
}