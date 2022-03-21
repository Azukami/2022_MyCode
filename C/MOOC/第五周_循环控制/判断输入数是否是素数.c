#include <stdio.h>

int main()
{
    int num;//判断num是否是素数
    scanf("%d", &num);
    int i;
    int isPrime = 1;//当isPrime为1时，表明num是素数
//设isPrime一开始为1是因为发现的条件是要使得它为0的条件。此时需要证伪而不是证真
    for(i = 2; i < num; i++ ) {
        /*num % i;
        if (num % i != 0 ){
            printf("%d是素数。\n", num);//会导致重复输出
        } else {
            printf("%d不是素数。\n", num);//会导致重复输出
        }*///因此需要对循环进行控制，设置变量isPrime来控制num是否是素数
        if ( num % i == 0) {
            isPrime = 0;//num可以被除1和本身以外的数字整除，则num不是素数，此时让isPrime变为0表示num不是素数
            break;//使得isPrime为0时退出循环，无需做剩下的运算
        }
        
    }
    if ( isPrime == 1 ) {
        printf("%d是素数\n", num);
    } else {
        printf("%d不是素数\n", num);
    }
    
    return 0;
}
/*break和continue的区别：
一个班的同学们一起唱歌，第一个同学唱的很好听，唱完之后轮到第二个同学唱歌（循环继续执行下去），
第二个同学唱的比较难听，打断他的唱歌行为，换第三个同学唱歌（continue），第三个同学唱的令人无法
忍受，这个唱歌活动直接结束，第四、第五乃至后面的同学都不用唱歌了（break）*/