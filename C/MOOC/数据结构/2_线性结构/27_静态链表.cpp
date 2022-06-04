#include <stdlib.h>
#define MAXSIZE 10      //静态链表的最大长度
struct Node {           //静态链表结构类型的定义
    int data;           //存储数据元素
    int next;           //下一个元素的数组下标
};
void testSLinkList()
{
    struct Node a[MAXSIZE]; //数组a做为静态链表
    //后续代码
}
//另一种定义方式
typedef struct {
    int data;
    int next;
} SLinkList[MAXSIZE];