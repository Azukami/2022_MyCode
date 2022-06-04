/*算法：
可以先拿数组中第一个元素过来，假设它是最大的，认为最大的元素是maxid，然后初始情况下maxid指向第一个元素。maxid先指向0号，然后从1号开始，如果1号a[1] > a[maxid]，则让maxid = 1。
for (int i = 1, i<len, i++) {
    if(a[i] > a[maxid]) {
        maxid = i;    
    }
}
当这个循环全部走完，此时的maxid指向的位置对应的元素就是数组中的最大元素。
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
    printf("位置%d上的%d最大。\n", maxid, a[maxid]);

    return 0;
}