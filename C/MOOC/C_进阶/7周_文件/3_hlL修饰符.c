//���η��������������͵ģ�����hh��ʾ�������������ֽ������
//%n��ʾ��������д���ĸ���
#include <stdio.h>
void hlL(void)
{
    int num;
    printf("%hhd%n\n", 12345, &num);
    printf("\n");
    printf("%d\n", num);
}
int main(int argc, char const *argv[])
{
    hlL();
    return 0;
}