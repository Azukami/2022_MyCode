#include <stdio.h>
int main()
{
    int i;
    scanf("%d", &i);
    int a = i / 16;/*提取输入数字的十位16进制*/
    int b = i % 16;/*提取输入数字的个位16进制*/
    int c = a * 10 + b;
    printf("%d", c);

    return 0;
}