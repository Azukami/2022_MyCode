//�㷨˼�룺
//1.����������һ���������ڱ���number�
//2.һ����������ı���count��ʼ��Ϊ0��
//3.���û�����һ������a��
//4.count����1��
//5.�ж�a��number�Ĺ�ϵ�����a�󣬾�������󡱣����aС���������С����
//6.���a��number�ǲ���ȵģ������Ǵ���С��������ת�ص���������
//7.���򣬳�����������С��ʹ�����Ȼ�������
//ע��ѭ��������a��number����ȡ�
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));//Ϊ�������������ȥ����������һ������Ҫ����stdlib���time�⡣
    int number = rand()%100 + 1;//ÿ���ٻ�rand()�͵õ�һ�������������rand��printf��scanfһ��������ϵͳ����ĺ�����
    int count = 0;
    int a = 0;
    printf("���Ѿ������һ��1��100֮�������");
    do {
        printf("���һ�����1��100֮������֣�");
        scanf("%d", &a);
        count ++;
        if ( a > number ) {
            printf("��µ������ˡ�");
        } else if ( a < number ) {
            printf("��µ���С�ˡ�");
        }
    } while ( a != number);
    printf("̫���ˣ�������%d�ξͲµ��˴𰸡�\n", count);

    return 0;
}