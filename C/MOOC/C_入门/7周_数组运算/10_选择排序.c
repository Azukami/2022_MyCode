/*�㷨��
�������������е�һ��Ԫ�ع����������������ģ���Ϊ����Ԫ����maxid��Ȼ���ʼ�����maxidָ���һ��Ԫ�ء�maxid��ָ��0�ţ�Ȼ���1�ſ�ʼ�����1��a[1] > a[maxid]������maxid = 1��
for (int i = 1, i<len, i++) {
    if(a[i] > a[maxid]) {
        maxid = i;    
    }
}
�����ѭ��ȫ�����꣬��ʱ��maxidָ���λ�ö�Ӧ��Ԫ�ؾ��������е����Ԫ�ء�
ϣ���ҵ������������Ԫ���ܹ�����������һ��λ�ã�Ӧ����ԭ�������������һ��λ���ϵ�Ԫ�غ�90��λ�ý�����
��һ���ҳ�������Ԫ��֮��Ҫ����������Ҫ����a[maxid]��a[len-1]��
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
    int len = sizeof(a)/sizeof(a[0]);
    for (int i=len-1; i>0; i--) {
        int maxid = max(a, i+1);
        //swap a[maxid], a[len-1]������
        int t = a[maxid];
        a[maxid] = a[i];
        a[i] = t;     //�������
    }
    for (int i=0; i<len; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}