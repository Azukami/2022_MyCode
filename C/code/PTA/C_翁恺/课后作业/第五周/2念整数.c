#include <stdio.h>
/*����һ��������Ȼ���ú���ƴ�������������ÿһλ�������
����1234����� yi er san si 
ÿ���ֵ�ƴ��֮����һ���ո񣬵��������ֺ���û�пո�
����������ʱ��������Ŀ�ͷ����fu����-2341���Ϊ��
fu er san si yi*/
int main()
{
    int x;
    scanf("%d", &x);//��������
    int mask = 1;
    if(x >= 0) {
        int t = x;//�洢x��ֵ
        while (t > 9) {
            t /= 10;
            mask *= 10;
        }
        do {
            int d = x / mask;
            switch(d) {
                case 0: printf("ling"); break;
                case 1: printf("yi"); break;
                case 2: printf("er"); break;
                case 3: printf("san"); break;
                case 4: printf("si"); break;
                case 5: printf("wu"); break;
                case 6: printf("liu"); break;
                case 7: printf("qi"); break;
                case 8: printf("ba"); break;
                case 9: printf("jiu"); break;
            } if (mask > 9) {
                printf(" ");
            }
            x %= mask;
            mask /= 10;
        } while(mask > 0);
    } else {
        int t = -x;
        int a = -x;
        while (t > 9) {
            t /= 10;
            mask *= 10;
        }
        printf("fu ");
        do {
            int d = a / mask;
            switch(d) {
                case 0: printf("ling"); break;
                case 1: printf("yi"); break;
                case 2: printf("er"); break;
                case 3: printf("san"); break;
                case 4: printf("si"); break;
                case 5: printf("wu"); break;
                case 6: printf("liu"); break;
                case 7: printf("qi"); break;
                case 8: printf("ba"); break;
                case 9: printf("jiu"); break;
            } if (mask > 9) {
                printf(" ");
            }
            a %= mask;
            mask /= 10;
        } while(mask > 0);
    }
    
    return 0;
}