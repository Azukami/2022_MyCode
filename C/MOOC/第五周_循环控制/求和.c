#include <stdio.h>
//求1+1/2+1/3+...+1/n的数列和
int main()
{
    int n;
    int i;
    double sum = 0.0;
    scanf("%d", &n);
    for (i = 1; i <= n; i++ ) {
        sum += 1.0/i;
    }
    printf("%f", sum);//注意输出double型浮点数要用%f，读入double型浮点数要用%lf
    return 0;
}