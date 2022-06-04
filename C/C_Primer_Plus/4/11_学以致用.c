#include <stdio.h>
int main(void)
{
    float cash = 92.83f;
    char name[40];
    scanf("%s", name);
    printf("The %s family just may be $%.2f dollars richer!", name, cash);

    return 0;
}