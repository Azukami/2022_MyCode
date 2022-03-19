#include <stdio.h>

int main()
{
    int number;
    int ji = 0;
    int ou = 0;
    scanf("%d", &number);
    while(number != -1)
    {
        if (number % 2 == 0) {
            ou ++;
        } else {
            ji ++;
        }
        scanf("%d", &number);
    }
    printf("%d %d", ji, ou);

    return 0;
}