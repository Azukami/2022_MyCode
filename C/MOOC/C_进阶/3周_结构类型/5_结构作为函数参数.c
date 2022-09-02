//�����ṹ������Ϊ������ֵ���뺯��
//��ʱ�����ں������½�һ���ṹ�����������Ƶ����ߵĽṹ��ֵ
//����Ҳ���Է���һ���ṹ
#include <stdio.h>
#include <stdbool.h>

struct date {
    int month;
    int day;
    int year;
};
bool isLeap(struct date d); //�ж��������ڵ����ǲ�������
int numberOfDays(struct date d);

int main(int argc, char const *argv[])
{
    struct date today, tomorrow;

    printf("Enter today's date (mm dd yyyy):");//�û������������ڣ�������
    scanf("%i %i %i", &today.month, &today.day, &today.year);

    if ( today.day != numberOfDays(today)) { //������첻������µ����һ��
        tomorrow.day = today.day+1;
        tomorrow.month = today.month;
        tomorrow.year = today.year;
    } else if (today.month == 12) { //�����������һ������һ��
        tomorrow.day = 1;
        tomorrow.month = 1;
        tomorrow.year = today.year + 1;
    } else { //�ڲ���12�µ�ĳ���µ����һ��
        tomorrow.day = 1;
        tomorrow.month = today.month+1;
        tomorrow.year = today.year;
    }

    printf("Tomorrow's date is %i-%i-%i.\n", tomorrow.year, tomorrow.month, tomorrow.day);

    return 0;
}

int numberOfDays(struct date d)
{
    int days;
    const int daysPerMonth[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};//��ʾÿ�����ж�����

    if (d.month == 2 && isLeap(d)) {    //��������꣬��ô2����29��
        days = 29;
    } else {
        days = daysPerMonth[d.month-1]; //�����±��0��ʼ�����Ҫ��1
    }
    return days;
}

bool isLeap(struct date d)  //�ɽṹ����d���ж��Ƿ�������
{
    bool leap = false;
    if( (d.year % 4 == 0 && d.year % 100 != 0) || d.year%400 == 0) {
        leap = true;
    }
    return leap;
}