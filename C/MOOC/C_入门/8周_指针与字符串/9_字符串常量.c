#include <stdio.h>
int main(void)
{
    char *s = "Hello World";
    //s[0] = 'B';
    char *s2 = "Hello World";
    char s3[] = "Hello World";
    printf("s =%p\n", s);
    printf("s2=%p\n", s2);
    printf("s3=%p\n", s3);
    s3[0] = 'B';
    printf("Here!s3[0]=%c\n", s[0]);

    return 0;
}