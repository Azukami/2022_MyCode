//char *strchr(const char *s, int c);
//在字符串s中从左开始寻找字符c第一次出现的位置，返回的是指针
//char *strrchr(const char *s, int c);
//在字符串s中从右开始寻找字符c第一次出现的位置
//返回的指针指向了要寻找的字符
//返回NULL表示没有找到
//如何寻找第二个字符？
//将找到的字符后面的东西复制到另一个字符串中去。
//将找到的字符前面的东西复制到另一个字符串中去。
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
    char s[] = "hello";
    char *p = strchr(s, 'l');
    char c = *p;
    *p = '\0';
    char *t = (char*)malloc(strlen(s)+1);
    strcpy(t,s);
    *p = c;
    printf("%s\n", t);
    free(t);

    return 0;
}