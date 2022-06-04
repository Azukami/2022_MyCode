#include <stdio.h>
int main(void)
{
    int age;
    scanf("%d", &age);
    int day = age * 365;
    printf("Your age is %d , your day is %d.\n", age, day);

    return 0;
}