//�ַ������黹������Ϊmain�����Ĳ�����
//main��������������ʵ���ж�����������������������������һ��������argc����һ�����ַ�������argv*[]
//���������������û�������Ǹ������е����ж��ٸ��ַ�����
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i;
    for (i=0; i<argc; i++) {
        printf("%d:%s\n", i, argv[i]);
    }

    return 0;
}