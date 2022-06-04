//strlen函数的作用是返回字符串长度，不包括结尾的0.
#include <stdio.h>
#include <string.h>

int mylen(const char *s)    //要数出s所指的那个地方有多少个字符
{
    int i = 0;
    int cnt = 0;
    //不知道数组有多大，因此用while循环
    while (s[i] != '\0') {
        i++;
        cnt++;
    }
    
    return cnt;
}
int main(int argc, char const *argv[])
{
    char line[] = "Hello";
    printf("strlen=%lu\n", mylen(line));
    printf("sizeof=%lu\n", sizeof(line));

    return 0;
}