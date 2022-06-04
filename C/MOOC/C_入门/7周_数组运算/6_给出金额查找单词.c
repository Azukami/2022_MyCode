//美元中的硬币是有名字的，如1分是penny，5分是nickel，10分是dime，25分是quarter，50分是half-dollar，不同的数字对应有一个英文单词。
//如果要写一个程序来做搜索，输入一个数字比如说10，表示10美分，程序就会给出10美分所对应的单词
//可以将数字金额看作一个数组，将对应单词看作另一个数组，通过数组之间位置对应来查找相应的单词
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