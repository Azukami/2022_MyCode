//Flag(��־)������
//-��ʾ�����
#include <stdio.h>
void Flag1(void)
{
    printf("%9d\n", 123);
    printf("%-9d\n", 123);
}
//+��ʾǰ���мӺŻ����
void Flag2(void)
{
    printf("%+9d\n", 123);
    printf("%+-9d\n", -123); //�������мӺ��������
}
//0��ʾ���
void Flag3(void)
{
    printf("%09d\n", 123);
    printf("%-09d\n", -123);
}
int main(int argc, char const *argv[])
{
    Flag1();
    Flag2();
    Flag3();
    return 0;
}