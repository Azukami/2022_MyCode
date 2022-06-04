#include <stdio.h>
int main(void)
{
    int sum = 0;
    int count = 0;
    int num;
    do
    {
        scanf("%d", &num);
        if (num != -1) {
            sum = sum + num;
            count++;
        }
    } while (num != -1);
    double p = 1.0 * sum / count;
    printf("平均数是%f", p);
    
    return 0;
}
//在do-while循环中做了两次num是否=-1的判断，能否将这两次判断优化为一次？
/*优化：
#include <stdio.h>
int main(void)
{
    int sum = 0;
    int count = 0;
    int num;
    scanf("%d", &num);
    while ( num != -1 ) {
        sum = sum + num;
        count++;
        scanf("%d", &num);
    }
    double p = 1.0 * sum / count;
    printf("平均数是%f", p);
    return 0;
}
*/