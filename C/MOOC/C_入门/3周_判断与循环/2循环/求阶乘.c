#include <stdio.h>

//whileѭ����׳�
int main()
{
    int n;
    printf("������һ����������");
    scanf("%d", &n);
    int x = 1;

    int i = 1;
    while (x <= n) {
        i = x * i;
        x++;
    }
    pritnf("�������ֵĽ׳��ǣ�%d��\n", i);

    return 0;
}

//forѭ����׳�
int main()
{
    int n;/*������*/
    printf("������һ����������");
    scanf("%d", &n);
    int fact = 1;/*����׳�*/

    int i = 1;
    for ( i = 1; i <= n; i++ ) {
        fact = fact * i;
    }

    printf("%d!=%d", n, fact);

    return 0;
}