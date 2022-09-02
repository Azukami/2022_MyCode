/*�㷨��
�ô����������ź��򣬰���ĳ�ִ�С��ϵ�ź������ź����ǰ���£����Զ�������������
left����������Ҫ���������������ߵ��±�
right����������Ҫ��������������ұߵ��±�
��˿��Եõ��м����mid = (left + right) / 2�����������a[]�Ļ����ж�a[mid]�ʹ���������k�Ĵ�С��ϵ��
��a[mid] < k������mid��mid������е����ֶ��ȴ���������kС��k��mid���ұߡ�
Ȼ��left�ƶ���a[mid+1]��λ���ϣ���left = mid + 1�����ǰ���������߶������ˣ�һ���Ӽ�����һ�롣
��������Ұ벿�ּ���֮ǰ�Ķ�����mid = (left + right) / 2����������ȡ����
��a[mid[ < k������mid��mid������е����ֶ��ȴ���������kС��k��mid���ұߡ�
Ȼ��left�ƶ���a[mid + 1]��λ���ϣ���left = mid + 1�����ǰ�����ʣ�ಿ�ֵ����߶�����
��������Ұ벿�ּ���֮ǰ�Ķ�����mid = (left + right) / 2��
��a[mid] > k������mid��mid�ұ����е����ֶ��ȴ���������kС��k��mid����ߡ�
Ȼ��right�ƶ���a[mid - 1]��λ���ϣ���right = mid - 1��
��ʱleft��rightָ��ͬһ��λ�ã�mid = (left + right) / 2 = left = right����ʱa[mid] = k���ɹ��ҵ���
*/
#include <stdio.h>

int search(int key, int a[], int len)
{
    int ret = -1;
    int left = 0;
    int right = len - 1;
    while (right > left) {
        int mid = (left + right) / 2;
        if (a[mid] == key) {
            ret = mid;
            break;
        } else if (a[mid] > key) {
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }
    return ret;
}

int main()
{
    int k;
    printf("��������������֣�");
    scanf("%d", &k);
    int a[] = {2,4,7,11,13,16,21,24,27,32,36,40,46};
    int r = search(k, a, sizeof(a)/sizeof(a[0]));
    if (r > -1) {
        printf("%d������a[]��%d����\n", k, r);
    } else if (r = -1) {
        printf("%d��������a[]�С�\n", k);
    }
    return 0;
}