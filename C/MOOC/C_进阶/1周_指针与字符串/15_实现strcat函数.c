//char *strcat(char *restrict s1, const char *restrict s2);
//��s2������s1�ĺ��棬�ӳ�һ�������ַ���
//����s1
//s1��������㹻�Ŀռ�
//���仰˵�����ӻ���һ�ֿ�����ֻ�����������Ǵ�dst[0]��ʼ�����Ǵ�dst[strlen(dst)]��ʼ
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