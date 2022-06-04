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
    printf("请输入硬币金额：");
    scanf("%d", &k);
    int r = search(k, amount, sizeof(amount)/sizeof(amount[0]));
    if (r > -1) {
        printf("%s\n", name[r]);
    } else {
        printf("输入错误。\n");
    }
    return 0;
}
*/
//以上程序的瑕疵在于使用了割裂的两个数组，这样的程序结构对于cache来说是不友好的
//更好的做法是将数字和其对应的字符串放在一起，把面额和它的名字放的比较近，一旦找到了面额，它的名字就在附近，而不需要到另外的地方去寻找名字
//修改代码，使用一个数组来实现这个功能：
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
};  //用一个结构将值和它对应的字符串放在了一起，这种做法是对cache更为友好的做法。

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
    printf("请输入硬币金额：");
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