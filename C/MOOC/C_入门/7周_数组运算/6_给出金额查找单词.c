//��Ԫ�е�Ӳ���������ֵģ���1����penny��5����nickel��10����dime��25����quarter��50����half-dollar����ͬ�����ֶ�Ӧ��һ��Ӣ�ĵ��ʡ�
//���Ҫдһ��������������������һ�����ֱ���˵10����ʾ10���֣�����ͻ����10��������Ӧ�ĵ���
//���Խ����ֽ���һ�����飬����Ӧ���ʿ�����һ�����飬ͨ������֮��λ�ö�Ӧ��������Ӧ�ĵ���
#include <stdio.h>

int amount[] = {1,5,10,25,50};
char *name[] = {"penny","nickel","dime","quarter","half-dollar"};

int search(int key, int a[], int len)
{
    int ret = -1;
    for (int i=0; i<len; i++) {
        if (key == a[i]) {
            ret = i;
            break;
        }
    }
    return ret;
}

int main()
{
    int k;
    printf("������Ӳ�ҽ�");
    scanf("%d", &k);
    int r = search(k, amount, sizeof(amount)/sizeof(amount[0]));
    if (r > -1) {
        printf("%s\n", name[r]);
    } else {
        printf("�������\n");
    }
    return 0;
}