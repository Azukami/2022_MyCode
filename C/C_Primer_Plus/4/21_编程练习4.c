#include <stdio.h>
int main(void)
{
    float high;
    printf("������������:\n");
    scanf("%f", &high);
    char name[40];
    printf("�������������:\n");
    scanf("%s", name);
    printf("%s, yuo are %f feet tall", name, high);

    return 0;
}