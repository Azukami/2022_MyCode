//char *strchr(const char *s, int c);
//���ַ���s�д���ʼѰ���ַ�c��һ�γ��ֵ�λ�ã����ص���ָ��
//char *strrchr(const char *s, int c);
//���ַ���s�д��ҿ�ʼѰ���ַ�c��һ�γ��ֵ�λ��
//���ص�ָ��ָ����ҪѰ�ҵ��ַ�
//����NULL��ʾû���ҵ�
//���Ѱ�ҵڶ����ַ���
//���ҵ����ַ�����Ķ������Ƶ���һ���ַ�����ȥ��
//���ҵ����ַ�ǰ��Ķ������Ƶ���һ���ַ�����ȥ��
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