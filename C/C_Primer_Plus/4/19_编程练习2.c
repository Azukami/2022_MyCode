#include <stdio.h>
int main(void)
{
    char name[40];
    printf("ÇëÊäÈëÄúµÄÃû×Ö:\n");
    scanf("%s", name);
    printf("\"%s\"\n", name);
    printf("\"%20s\"\n", name);
    printf("\"%-20s\"\n", name);
    printf("%3s\n", name);

    return 0;
}