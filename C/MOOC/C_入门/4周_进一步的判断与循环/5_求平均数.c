#include <stdio.h>
int main(void)
{
    int sum = 0;
    int count = 0;
    int num;
    do
    {
        scanf("%d", &num);
        if (num != -1) {
            sum = sum + num;
            count++;
        }
    } while (num != -1);
    double p = 1.0 * sum / count;
    printf("ƽ������%f", p);
    
    return 0;
}
//��do-whileѭ������������num�Ƿ�=-1���жϣ��ܷ��������ж��Ż�Ϊһ�Σ�
/*�Ż���
#include <stdio.h>
int main(void)
{
    int sum = 0;
    int count = 0;
    int num;
    scanf("%d", &num);
    while ( num != -1 ) {
        sum = sum + num;
        count++;
        scanf("%d", &num);
    }
    double p = 1.0 * sum / count;
    printf("ƽ������%f", p);
    return 0;
}
*/