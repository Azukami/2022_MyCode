#include <stdio.h>
//��1-1/2+1/3-1/4+...+1/n�����к�
int main()
{
    int n;
    int i;
    double sum = 0.0;
    double sum1 = 0.0;//������
    double sum2 = 0.0;//ż����
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        if(i % 2 == 0) {
            sum2 += 1.0/i;
        } else {
            sum1 += 1.0/i;
        }
        sum = sum1 - sum2;
    }
    printf("%f", sum);

    return 0;
}