//[]������ȿ��Զ���������Ҳ���Զ�ָ����
//��������������ָ�룬�������������ľ��ǵ�ַ��
#include <stdio.h>

void minmax(int a[], int len, int *max, int *min);

int main(void)
{
    int a[] = {1,2,3,4,5,6,7,8,9,12,13,14,16,17,21,23,55};
    int min,max;
    printf("main sizeof(a[])=%lu\n", sizeof(a));
    printf("main a=%p\n", a);
    int len = sizeof(a) / sizeof(a[0]);
    minmax(a, len, &min, &max);
    printf("min=%d,max=%d\n", min, max);
    int *p = &min;  //��ָ��pָ�����min
    printf("*p=%d\n", *p);  
    //ָ��p�б������min�ĵ�ַ����p�������*����������p��ָ�ı�����������*p��ֵ�����������min��ֵ��
    printf("p[0]=%d\n", p[0]);  //p[0]�൱��*p
    return 0;
}

void minmax(int a[], int len, int *min, int *max)
{
    int i;
    printf("minmax sizeof(a[])=%lu\n", sizeof(a));
    printf("minmax a=%p\n", a);
    *min = *max = a[0];
    for(i=1; i<len; i++) {
        if(a[i] < *min) {
            *min = a[i];
        } else if(a[i] > *max) {
            *max = a[i];
        }
    }
}