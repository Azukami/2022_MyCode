#include "1_�ɱ�����ĺ�����.h"
#include <stdio.h>
#include <stdlib.h>
const BLOCK_SIZE = 20;  //�������Խ�磬��һ��������20��
/*
typedef struct {
    int *array; //����
    int size;   //��С
} Array;    //������ṹ����������Ķ�̬��������Array
*/
//create�����Ĳ�����size��һ��ʼ��ϣ����������Ƕ��Ȼ��������һ��array��

Array array_create(int init_size)   //��������һ������
{
    Array a;    //����a
    a.size = init_size; //a�Ĵ�С�Ǵ�������Ĵ�С
    a.array = (int *)malloc(a.size*sizeof(int));    //Ϊ����a��̬�����ڴ�ռ�
    return a;   //���ṹa��Ϊ������������
}

//����Ѿ�����һ������a�ˣ���Ȼa���뿪mainʱ�ᱻ���գ�����a�л�����һ��ָ��array�����ָ����ָ�Ķ�����Ҫ��ǡ���ķ�ʽȥ�ͷ���
void array_free(Array *a)
{
    free(a->array);
    a->array = NULL;    //��ֹ���˵�������,��Ϊfree(0),free(NULL)���޺���
    a->size = 0;
}

//sizeҪ�õ���ǰ�������ж��ٸ���Ԫ
int array_size(const Array *a)  //�����û����鵱ǰ�ж��ٸ��ռ����
{
    return a->size;
}

//at�����������鵱�е�ĳ����Ԫ��Ҫ������idx�ϵĶ���
//index/BLOCK_SIZE���������λ���ĸ�BLOCK���棬+1��BLOCK��1��ʼ�������
//��BLOCK_SIZE-a->size
int* array_at(Array *a, int index)
{
    if (index >= a->size)
    {
        array_inflate(a, (index/BLOCK_SIZE+1)*BLOCK_SIZE-a->size);
    }
    return &(a->array[index]);  //Ҫ���ص���ָ�룬���Ҫȡindex��ָλ�õĵ�ַ
}

//����ʹ��������
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
    *array_at(&a, 0) = 10;  //���Խ�ֵд��������ȥ
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
