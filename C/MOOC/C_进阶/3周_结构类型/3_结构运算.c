//Ҫ���������ṹ��ֱ���ýṹ����������
//���������ṹ����������ֵ��ȡ��ַ��Ҳ���Դ��ݸ���������
//p1 = (struct point){5,10};
//��{5,10}ǿ������ת��Ϊstruct�����߱�����Ҫ��{5��10}ǿ��ת��Ϊpoint���ֽṹ�ı�����Ȼ���������p1��
//��������p1 = p2��
#include <stdio.h>
struct date
{
    int month;
    int day;
    int year;
};
int main(int argc, char const *argv[])
{
    struct date today;
    today = (struct date){07,31,2022};

    struct date day;
    day = today;

    printf("Today's date is %i-%i-%i.\n", today.year,today.month,today.day);
    printf("The day's date is %i-%i-%i.\n", day.year,day.month,day.day);

    return 0;
}