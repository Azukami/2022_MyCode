#include <stdio.h>
int main(void)
{
    float Mb;
    float MB;
    printf("����������λÿ��Ϊ��λ�������ٶ�:\n");
    scanf("%f", &Mb);
    printf("�����������ֽ�Ϊ��λ���ļ���С:\n");
    scanf("%f", &MB);
    float time = (MB * 8) / Mb;
    printf("At %.2f megabits per second, a file of %.2f megabytes downloads in %.2f seconds.\n", Mb, MB, time);

    return 0;
}