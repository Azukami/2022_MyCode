#include <stdio.h>
#include <string.h>
int main(void)
{
    char xing[40];
    printf("�������û���:\n");
    scanf("%s", xing);
    char name[40];
    printf("�������û���:\n");
    scanf("%s", name);
    int x = strlen(xing);
    int y = strlen(name);
    printf("%s %s\n", xing, name);
    printf("%*d %*d\n", x, x, y, y);
    printf("%s %s\n", xing, name);
    printf("%-*d %-*d\n", x, x, y, y);

    return 0;
}