//һ���ṹ����һ�����ϵ��������ͣ�����������и������͵ĳ�Ա��Ȼ����һ�����������������
#include <stdio.h>
int main(int argc, char const *argv[])
{
    struct date
    {
        int month;
        int day;
        int year;
    };

    struct date today;

    today.month = 07;
    today.day = 31;
    today.year = 2022;

    printf("Today's date is %i-%i-%i.\n", today.year,today.month,today.day);

    return 0;   
}