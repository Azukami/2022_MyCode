// flags.c -- ��ʾһЩ��ʽ���
#include <stdio.h>
int main(void)
{
    printf("%x %X %#x %#X\n", 31, 31, 31, 31);
    printf("**%5d**%5.3d**%05d**%05.3d**\n", 6, 6, 6, 6);

    return 0;
}