#include <stdio.h>
int main(void)
{
    float cup;
    printf("�����뱭��:");
    scanf("%f", &cup);
    float pt = cup * 2.0;
    printf("��Ӧ��Ʒ��Ϊ%f\n", pt);
    float ans = cup / 8.0;
    printf("��Ӧ�İ�˾Ϊ%f\n", ans);
    float ts = ans / 2.0;
    printf("��Ӧ������Ϊ%f\n", ts);
    float cs = ts / 3.0;
    printf("��Ӧ�Ĳ���Ϊ%f\n", cs);

    return 0;
}