#include <stdio.h>
//����������a��b��������ǵ����Լ��
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int i;
    int j;
    for (i = a; i >= 1; i--) {
        int m = a % i;
        for (j = b; j >= 1; j--) {
            int n = b % j;
            if ( m == n == 0) {
                printf("���Լ����%d", n);
                goto out;
            }
        }
    }
out:
    return 0;
}