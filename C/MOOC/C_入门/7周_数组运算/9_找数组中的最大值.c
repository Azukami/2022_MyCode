/*�㷨��
�������������е�һ��Ԫ�ع����������������ģ���Ϊ����Ԫ����maxid��Ȼ���ʼ�����maxidָ���һ��Ԫ�ء�maxid��ָ��0�ţ�Ȼ���1�ſ�ʼ�����1��a[1] > a[maxid]������maxid = 1��
for (int i = 1, i<len, i++) {
    if(a[i] > a[maxid]) {
        maxid = i;    
    }
}
�����ѭ��ȫ�����꣬��ʱ��maxidָ���λ�ö�Ӧ��Ԫ�ؾ��������е����Ԫ�ء�
*/
#include <stdio.h>
int max(int a[], int len)
{
    int maxid = 0;
    for (int i = 1; i<len; i++) {
        if(a[i] > a[maxid]) {
            maxid = i;
        }
    }
    return maxid;
}
int main()
{
    int a[] = {2,45,6,12,87,34,90,24,23,11,65};
    int maxid = max(a, sizeof(a)/sizeof(a[0]));
    printf("λ��%d�ϵ�%d���\n", maxid, a[maxid]);

    return 0;
}