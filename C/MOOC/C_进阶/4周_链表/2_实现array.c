#include "1_可变数组的函数库.h"
#include <stdio.h>
#include <stdlib.h>
const BLOCK_SIZE = 20;  //如果访问越界，就一次性增长20个
/*
typedef struct {
    int *array; //数组
    int size;   //大小
} Array;    //用这个结构来表达所作的动态数组类型Array
*/
//create函数的参数是size，一开始你希望这个数组是多大，然后它给你一个array。

Array array_create(int init_size)   //用来创建一个数组
{
    Array a;    //数组a
    a.size = init_size; //a的大小是传入参数的大小
    a.array = (int *)malloc(a.size*sizeof(int));    //为数组a动态分配内存空间
    return a;   //将结构a作为函数参数返回
}

//如果已经有了一个数组a了，虽然a在离开main时会被回收，但是a中还包括一个指针array，这个指针所指的东西需要有恰当的方式去释放它
void array_free(Array *a)
{
    free(a->array);
    a->array = NULL;    //防止别人调用两次,因为free(0),free(NULL)是无害的
    a->size = 0;
}

//size要得到当前数组中有多少个单元
int array_size(const Array *a)  //告诉用户数组当前有多少个空间可用
{
    return a->size;
}

//at用来访问数组当中的某个单元，要返回在idx上的东西
//index/BLOCK_SIZE可以算出它位于哪个BLOCK里面，+1是BLOCK从1开始数的序号
//×BLOCK_SIZE-a->size
int* array_at(Array *a, int index)
{
    if (index >= a->size)
    {
        array_inflate(a, (index/BLOCK_SIZE+1)*BLOCK_SIZE-a->size);
    }
    return &(a->array[index]);  //要返回的是指针，因此要取index所指位置的地址
}

//用以使数组增长
void array_inflate(Array *a, int more_size)
{
    int *p = (int*)malloc(sizeof(int)*(a->size + more_size));
    int i;
    for ( i = 0; i < a->size; i++)
    {
        p[i] = a->array[i];
    }
    free(a->array);
    a->array = p;
    a->size += more_size;
}

int main(int argc, char const *argv[])
{
    Array a = array_create(100);
    printf("%d\n", array_size(&a));
    *array_at(&a, 0) = 10;  //可以将值写到数组中去
    printf("%d\n", *array_at(&a, 0));
    int number;
    int cnt = 0;
    while(number != -1) {
        scanf("%d", &number);
        if(number != -1) {
            *array_at(&a, cnt++) = number;
        }
    }
    array_free(&a);
    
    return 0;
}
