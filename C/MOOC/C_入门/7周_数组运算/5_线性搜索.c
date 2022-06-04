//对于搜索来说，最简单的方式就是线性搜索，即我们有数据了，然后去遍历每一个数据，去看遍历出的数据有没有哪一个和要找的数据是一样的。
#include <stdio.h>
int search(int key, int a[], int len)
{
    int ret = -1;
    for (int i=0; i<len; i++)
    {
        if (key == a[i]) {
            ret = i;
            break;
        }
    }
    return ret;
}

int main()
{
    int a[] = {1,3,2,5,12,14,23,6,9,45};
    int r = search(12, a, sizeof(a)/sizeof(a[0]));
    printf("%d\n", r);

    return 0;
}