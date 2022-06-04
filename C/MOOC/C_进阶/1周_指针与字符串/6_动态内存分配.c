//使用malloc函数来进行动态内存分配
//以想要逆序输出一个自定义数组为例
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int number;
    printf("请输入数量：");
    scanf("%d", &number);
    //C99可以这样做
    //int a[number];
    //使用动态内存分配
    int *a;
    a = (int*)malloc(number*sizeof(int)); //malloc需要的参数是这个数组所占据的空间，即字节数，而非int数
    //由于malloc返回的是void*，因此还需要强制类型转换成为int*。
    //接下来直接把指针a当作数组用就可以了。
    int i;
    for(i=0; i<number; i++) {
        scanf("%d", &a[i]);
    }
    for(i=number-1; i>=0; i--) {
        printf("%d ", a[i]);
    }
    //malloc向系统申请了空间，用完之后需要归还
    free(a);

    return 0;
}