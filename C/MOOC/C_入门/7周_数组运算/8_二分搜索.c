/*算法：
让待搜索数组排好序，按照某种大小关系排好序，在排好序的前提下，可以定义三个变量：
left，表明现在要搜索的数组的最左边的下标
right，表明现在要搜索的数组的最右边的下标
因此可以得到中间变量mid = (left + right) / 2，如果数组是a[]的话，判断a[mid]和待搜索数字k的大小关系。
若a[mid] < k，表明mid及mid左边所有的数字都比待搜索数字k小，k在mid的右边。
然后将left移动到a[mid+1]的位置上，让left = mid + 1，于是把数组的左半边都丢掉了，一下子减少了一半。
在数组的右半部分继续之前的动作，mid = (left + right) / 2，可以向下取整。
若a[mid[ < k，表明mid及mid左边所有的数字都比待搜索数字k小，k在mid的右边。
然后将left移动到a[mid + 1]的位置上，让left = mid + 1，于是把数组剩余部分的左半边丢掉。
在数组的右半部分继续之前的动作，mid = (left + right) / 2，
若a[mid] > k，表明mid及mid右边所有的数字都比待搜索数字k小，k在mid的左边。
然后将right移动到a[mid - 1]的位置上，让right = mid - 1。
此时left和right指向同一个位置，mid = (left + right) / 2 = left = right，此时a[mid] = k，成功找到。
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
    printf("请输入待查找数字：");
    scanf("%d", &k);
    int a[] = {2,4,7,11,13,16,21,24,27,32,36,40,46};
    int r = search(k, a, sizeof(a)/sizeof(a[0]));
    if (r > -1) {
        printf("%d在数组a[]的%d处。\n", k, r);
    } else if (r = -1) {
        printf("%d不在数组a[]中。\n", k);
    }
    return 0;
}