#include <stdio.h>
int main(void)
{
    int a, b, c;
    printf("����������������");
    scanf("%d %d %d", &a, &b, &c);
    int max = 0;
    if (a > b && a > c) {
        max = a;
    } else if (b > a && b > c) {
        max = b;
    } else if (c > b && c > a) {
        max = c;
    }
    printf("��������%d", max);
    return 0;
}
//��ʦд��
/*
int a, b, c;
scanf("%d %d %d", &a, &b, &c);
int max = 0;
if (a > b) {
    if (a > c) {
        max = a;
    } else {
        max = c;
    }
} else {
    if (b > c) {
        max = b;
    } else {
        max = c;
    }
}
printf("The max is %d\n", max);
*/