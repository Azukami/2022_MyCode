//putchar������ʾ���׼���дһ���ַ�������д�˼����ַ���EOF(-1)��ʾдʧ��
//getchar������ʾ�ӱ�׼�������һ���ַ�������������int��Ϊ�˷���EOF(-1)
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int ch;
    
    while ( (ch = getchar()) != EOF ) { //��getchar�õ��Ľ������ch�������������EOF������ѭ�������ch��ֵ
        putchar(ch);
    }
    printf("EOF\n");

    return 0;
}