//strlen�����������Ƿ����ַ������ȣ���������β��0.
#include <stdio.h>
#include <string.h>

int mylen(const char *s)    //Ҫ����s��ָ���Ǹ��ط��ж��ٸ��ַ�
{
    int i = 0;
    int cnt = 0;
    //��֪�������ж�������whileѭ��
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