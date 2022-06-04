//求出1到10、20到30和35到45的三个和
/*如果不用函数，程序就会变得很冗长且重复
#include <stdio.h>
int main(void)
{
    int i;
    int sum;
    for(i = 1, sum = 0; i<=10; i++ ) {
        sum += i;
    }
    printf("%d到%d的和是%d\n",1, 10, sum);
    for(i = 20, sum = 0; i<=30; i++ ) {
        sum += i;
    }
    printf("%d到%d的和是%d\n",20, 30, sum);
    for(i = 35,sum = 0; i<=45; i++) {
        sum += i;
    }
    printf("%d到%d的和是%d\n", 35, 45, sum);
    return 0;
}
*/
//可以将这些重复的代码提取出来，写一个函数来实现求和的功能：
#include <stdio.h>
void sum(int begin, int end)
{
    int i;
    int sum = 0;
    for(i = begin; i<=end; i++ ) {
        sum += i;
    }
    printf("%d到%d的和是%d\n", begin, end, sum);
}
int main(void)
{
    sum(1,10);
    sum(20,30);
    sum(35,45);

    return 0;
}