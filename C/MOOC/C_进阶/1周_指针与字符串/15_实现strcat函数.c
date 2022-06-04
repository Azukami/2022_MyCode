//char *strcat(char *restrict s1, const char *restrict s2);
//把s2拷贝到s1的后面，接成一个长的字符串
//返回s1
//s1必须具有足够的空间
//换句话说，链接还是一种拷贝，只不过拷贝不是从dst[0]开始，而是从dst[strlen(dst)]开始
//dst[strlen(dst)] = src[0]
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char *mycat(char *a, const char *b)
{
    char *str=(char *)malloc(strlen(a) + strlen(b) + 1);
    strcpy(str, a);
    char *s = str + strlen(a);
    strcpy(s, b);
    free(str);

    return str;
}