//���1��10��20��30��35��45��������
/*������ú���������ͻ��ú��߳����ظ�
#include <stdio.h>
int main(void)
{
    int i;
    int sum;
    for(i = 1, sum = 0; i<=10; i++ ) {
        sum += i;
    }
    printf("%d��%d�ĺ���%d\n",1, 10, sum);
    for(i = 20, sum = 0; i<=30; i++ ) {
        sum += i;
    }
    printf("%d��%d�ĺ���%d\n",20, 30, sum);
    for(i = 35,sum = 0; i<=45; i++) {
        sum += i;
    }
    printf("%d��%d�ĺ���%d\n", 35, 45, sum);
    return 0;
}
*/
//���Խ���Щ�ظ��Ĵ�����ȡ������дһ��������ʵ����͵Ĺ��ܣ�
#include <stdio.h>
void sum(int begin, int end)
{
    int i;
    int sum = 0;
    for(i = begin; i<=end; i++ ) {
        sum += i;
    }
    printf("%d��%d�ĺ���%d\n", begin, end, sum);
}
int main(void)
{
    sum(1,10);
    sum(20,30);
    sum(35,45);

    return 0;
}