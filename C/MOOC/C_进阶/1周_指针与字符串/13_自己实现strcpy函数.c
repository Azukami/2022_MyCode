//�򵥵ؽ�src�����ݿ�����dst�м��ɡ�
#include <stdio.h>
#include <string.h>
char *mycpy1(char *dst, const char *src)    //����汾
{
    int idx = 0;    //��Ҫ��idx����������飺һ��������src����Ҫȥ�ߵڼ�������һ��������dst����Ҫ�������ڼ���
    while (src[idx] != '\0') {
        dst[idx] = src[idx];
        idx++;
    }
    dst[idx] = '\0';    //��Ϊѭ������֮��src��idxָ��'0'������ʱdst�л�δд��'\0'��

    return dst;
}
char *mycpy2(char *dst, const char *src)    //ָ��汾
{
    char *ret = dst;
    while (*src != '\0') {
        *dst = *src;
        dst++;
        src++;
    }
    //ѭ���������Ľ���
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