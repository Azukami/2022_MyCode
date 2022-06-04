//简单地将src中内容拷贝到dst中即可。
#include <stdio.h>
#include <string.h>
char *mycpy1(char *dst, const char *src)    //数组版本
{
    int idx = 0;    //需要让idx表达两件事情：一方面是在src那里要去走第几个，另一方面是在dst那里要拷贝到第几个
    while (src[idx] != '\0') {
        dst[idx] = src[idx];
        idx++;
    }
    dst[idx] = '\0';    //因为循环出来之后src中idx指向'0'，而此时dst中还未写入'\0'。

    return dst;
}
char *mycpy2(char *dst, const char *src)    //指针版本
{
    char *ret = dst;
    while (*src != '\0') {
        *dst = *src;
        dst++;
        src++;
    }
    //循环可以做改进：
    //while (*src!= '\0') {
    //    *dst++ = *src++;
    //}
    *dst = '\0';

    return ret;
}

int main(int argc, char const *argv[])
{
    char s1[] = "abc";
    char s2[] = "abc";
    mycpy1(s1,s2);

    return 0;
}