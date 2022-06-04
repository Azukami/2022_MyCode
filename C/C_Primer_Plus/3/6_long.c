#include <stdio.h>
int main(void)
{
    long int num1 = 225123143;
    long int num2 = 384124353;
    printf("num1 = %#lx, num2 = %#lo\n", num1, num2);//带前缀
    printf("num1 = %lx, num2 = %lo\n", num1, num2);//不带前缀
    char grade = 65;
    printf("%c\n", grade);
    char xiba = 'A';
    printf("%d\n", xiba);
    char beep = '\a';
    printf("%c\n", beep);
    printf("\a");
    printf("\\a");

    return 0;
}