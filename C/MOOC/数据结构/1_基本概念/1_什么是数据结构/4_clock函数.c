//clock()��������׽�ӳ���ʼ���е�clock()������ʱ���ķѵ�ʱ�䡣���ʱ�䵥λ��clock tick������ʱ�Ӵ�㡱��
//������clock()���׵��ǳ���CLK_TCK(��CLOCKS_PER_SEC)������ʱ��ÿ�����ߵ�ʱ�Ӵ����
//������ֲ�ͬ�Ļ�������һ�������������������һ�𣬾Ϳ��Լ����һ�������������˶����롣
#include <stdio.h>
#include <time.h>
clock_t start, stop;
//clock_t��clock()�������صı�������
double duration;
int main()
{
    start = clock();    //��ʼ��ʱ
    //Myfunction();       //�Լ�д�ĺ���
    stop = clock();     //ֹͣ��ʱ
    duration = ((double)(stop - start))/CLK_TCK;    //��������ʱ��
    printf("%lf\n", duration);
    printf("%lf\n", CLK_TCK);

    return 0;
}