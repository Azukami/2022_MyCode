#include <stdio.h>

int main()
{
    int a, b;
    printf("����������������");
    scanf("%d %d", &a, &b);

    int max;
    if (a > b) {
        max = a;
        printf("����Ǹ�����%d��\n", max);
    } else {
        max = b;
        printf("����Ǹ�����%d��\n", max);
    }
    
    return 0;
}