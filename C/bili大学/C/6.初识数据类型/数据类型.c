#include <stdio.h>
/*
char            �ַ���������
short           ������
int             ����
long            ������
long long       ����������
float           �����ȸ�����
double          ˫���ȸ�����
��������
���������--д����--��������е�����
��������Ա��������������������е�����
�����̳� - �ϼ���Ʒ - �۸� - ����Ҫ�������������۸�������С��
C���� - ��������������int��float
*/
/*int main()
{
    char ch;
//����һ���ַ����Ϳռ�char���洢�ַ�a
    return 0;
}
*/
//�о�ÿ���������͵Ĵ�С
int main()
{
    printf("����%d\n", 100);//��ӡһ������:%d
    printf("char��ռ�ռ�Ϊ%d\n", sizeof(char));
    printf("short��ռ�ռ�Ϊ%d\n", sizeof(short));
    printf("int��ռ�ռ�Ϊ%d\n", sizeof(int));
    printf("long��ռ�ռ�Ϊ%d\n", sizeof(long));
    printf("long long��ռ�ռ�Ϊ%d\n", sizeof(long long));
    printf("float��ռ�ռ�Ϊ%d\n", sizeof(float));
    printf("double��ռ�ռ�Ϊ%d\n", sizeof(double));
//sizeof��һ���ؼ��֣���C�е�һ���������������Ǽ������ͻ��߱�����ռ�ռ�Ĵ�С
//sizeof����ĵ�λ���ֽڣ�byte
/*������еĵ�λ��
bit - ���������С��λ���������ʶ�������1 0 ��1�洢��ռ�ռ����1bit��0�洢��ռ�ռ�Ҳ��1bit��
����һ��bit���������һ��������λ�ġ�
bit�������ֽڣ�byte��1 byte = 8 bit��
byte������kb - 1024byte��kb������mb - 1024kb��mb������gb - 1024mb��gb������tb - 1024gb��tb������pb - 1024tb
*/
    return 0;
}
/*C���Ա�׼�涨sizeof(long) >= sizeof(int)��������long��ռ�ռ�Ҳ��4byte*/
//��ô�������������Ϊ����߿ռ�������