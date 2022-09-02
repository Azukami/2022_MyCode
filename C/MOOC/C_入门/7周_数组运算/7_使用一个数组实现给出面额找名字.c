/*
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
*/
//���ϳ����覴�����ʹ���˸��ѵ��������飬�����ĳ���ṹ����cache��˵�ǲ��Ѻõ�
//���õ������ǽ����ֺ����Ӧ���ַ�������һ�𣬰������������ַŵıȽϽ���һ���ҵ������������־��ڸ�����������Ҫ������ĵط�ȥѰ������
//�޸Ĵ��룬ʹ��һ��������ʵ��������ܣ�
#include <stdio.h>

int amount[] = {1,5,10,25,50};
char *name[] = {"penny","nickel","dime","quarter","half-dollar"};

struct {
    int amount;
    char *name;
} coins[] = {
    {1, "penny"},
    {5, "nickel"},
    {10, "dime"},
    {25, "quarter"},
    {50, "half-dollar"}
};  //��һ���ṹ��ֵ������Ӧ���ַ���������һ�����������Ƕ�cache��Ϊ�Ѻõ�������

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
    //int r = search(k, amount, sizeof(amount)/sizeof(amount[0]));
    for (int i=0; i<sizeof(coins)/sizeof(coins[0]); i++) {
        if (k == coins[i].amount) {
            printf("%s\n", coins[i].name);
            break;
        }
    }

    return 0;
}