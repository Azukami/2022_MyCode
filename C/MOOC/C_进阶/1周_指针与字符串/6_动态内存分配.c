//ʹ��malloc���������ж�̬�ڴ����
//����Ҫ�������һ���Զ�������Ϊ��
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int number;
    printf("������������");
    scanf("%d", &number);
    //C99����������
    //int a[number];
    //ʹ�ö�̬�ڴ����
    int *a;
    a = (int*)malloc(number*sizeof(int)); //malloc��Ҫ�Ĳ��������������ռ�ݵĿռ䣬���ֽ���������int��
    //����malloc���ص���void*����˻���Ҫǿ������ת����Ϊint*��
    //������ֱ�Ӱ�ָ��a���������þͿ����ˡ�
    int i;
    for(i=0; i<number; i++) {
        scanf("%d", &a[i]);
    }
    for(i=number-1; i>=0; i--) {
        printf("%d ", a[i]);
    }
    //malloc��ϵͳ�����˿ռ䣬����֮����Ҫ�黹
    free(a);

    return 0;
}