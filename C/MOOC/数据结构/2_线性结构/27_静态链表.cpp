#include <stdlib.h>
#define MAXSIZE 10      //��̬�������󳤶�
struct Node {           //��̬����ṹ���͵Ķ���
    int data;           //�洢����Ԫ��
    int next;           //��һ��Ԫ�ص������±�
};
void testSLinkList()
{
    struct Node a[MAXSIZE]; //����a��Ϊ��̬����
    //��������
}
//��һ�ֶ��巽ʽ
typedef struct {
    int data;
    int next;
} SLinkList[MAXSIZE];