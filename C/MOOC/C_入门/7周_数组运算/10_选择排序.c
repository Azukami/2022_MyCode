/*算法：
可以先拿数组中第一个元素过来，假设它是最大的，认为最大的元素是maxid，然后初始情况下maxid指向第一个元素。maxid先指向0号，然后从1号开始，如果1号a[1] > a[maxid]，则让maxid = 1。
for (int i = 1, i<len, i++) {
    if(a[i] > a[maxid]) {
        maxid = i;    
    }
}
当这个循环全部走完，此时的maxid指向的位置对应的元素就是数组中的最大元素。
希望找到的数组中最大元素能够在数组的最后一个位置，应该让原来在数组中最后一个位置上的元素和90做位置交换。
第一轮找出了最大的元素之后，要做的事情是要交换a[maxid]和a[len-1]。
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
        //swap a[maxid], a[len-1]做交换
        int t = a[maxid];
        a[maxid] = a[i];
        a[i] = t;     //交换完成
    }
    for (int i=0; i<len; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}