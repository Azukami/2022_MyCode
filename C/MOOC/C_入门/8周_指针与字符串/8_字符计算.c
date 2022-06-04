#include <stdio.h>
int main()
{
    char c = 'A';
    c++;
    printf("%c\n", c);
    int i = 'Z' - 'A';
    printf("i=%d,i='%c'\n", i, i);
    //ÌÓÒİ×Ö·û
    printf("123\b\n456\n");
    printf("123\t456\n");
    printf("12\t456\n");

    return 0;
}