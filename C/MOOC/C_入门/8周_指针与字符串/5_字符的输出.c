//�ַ���������ڲ��洢
#include <stdio.h>
int main()
{
    char c;
    char d;
    c = 1;  //��ʱc�õ�����1����һ������
    d = '1';    //��ʱd�õ�����'1'����һ���ַ�
    if (c == d) {
        printf("c��d��ȡ�\n");
    } else {
        printf("�����\n");
    }
    printf("c=%d\n", c);
    printf("d=%d\n", d);

    return 0;
}