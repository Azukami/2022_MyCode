#include <stdio.h>
/*
char            字符数据类型
short           短整型
int             整型
long            长整型
long long       更长的整型
float           单精度浮点数
double          双精度浮点数
数据类型
计算机语言--写程序--解决生活中的问题
计算机语言必须有能力来描述生活中的问题
购物商城 - 上架商品 - 价格 - 程序要有能力来描述价格：整数、小数
C语言 - 整数、浮点数：int、float
*/
/*int main()
{
    char ch;
//创造一个字符类型空间char来存储字符a
    return 0;
}
*/
//研究每种数据类型的大小
int main()
{
    printf("整数%d\n", 100);//打印一个整数:%d
    printf("char所占空间为%d\n", sizeof(char));
    printf("short所占空间为%d\n", sizeof(short));
    printf("int所占空间为%d\n", sizeof(int));
    printf("long所占空间为%d\n", sizeof(long));
    printf("long long所占空间为%d\n", sizeof(long long));
    printf("float所占空间为%d\n", sizeof(float));
    printf("double所占空间为%d\n", sizeof(double));
//sizeof是一个关键字，是C中的一个操作符，作用是计算类型或者变量所占空间的大小
//sizeof输出的单位是字节：byte
/*计算机中的单位：
bit - 计算机中最小单位，计算机中识别二进制1 0 ，1存储所占空间就是1bit，0存储所占空间也是1bit。
所以一个bit是用来存放一个二进制位的。
bit上面是字节：byte，1 byte = 8 bit。
byte上面是kb - 1024byte，kb上面是mb - 1024kb，mb上面是gb - 1024mb，gb上面是tb - 1024gb，tb上面是pb - 1024tb
*/
    return 0;
}
/*C语言标准规定sizeof(long) >= sizeof(int)，因此输出long所占空间也是4byte*/
//这么多的数据类型是为了提高空间利用率