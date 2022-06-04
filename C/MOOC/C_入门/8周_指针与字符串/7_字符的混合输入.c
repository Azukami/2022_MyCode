#include <stdio.h>
int main()
{
    int i;
    char c;
    scanf("%d %c", &i, &c);
    printf("i=%d, c=%d, c='%c'\n",i,c,c);
    //如果写的是不带空格的scanf
    scanf("%d%c", &i, &c);
    printf("i=%d, c=%d, c='%c'\n",i,c,c);

    return 0;
}