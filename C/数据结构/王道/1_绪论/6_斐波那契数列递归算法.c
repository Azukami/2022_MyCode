//쳲��������еݹ��㷨
#include <stdio.h>
int fib_recur(int n)
{
    int n;
    if (n <= 1) {   //�ݹ���ֹ����:nΪ쳲��������е�ǰ����
        return n;
    }
    return fib_recur(n-1) + fib_recur(n-2); //���µݹ�
}
//������Եݹ��㷨�����Ż�
int dic[100];   //�ֵ�����
int fib_recur_with_dic(int n)
{
    int dic[100];
    if (n <= 1) {   //�ݹ���ֹ����
        return n;
    }
    for(int i=0; i<100; i++) {
        if(n == dic[i]) {       //���ֵ�
            return dic[i];
        } else {    //���û�鵽,�ͽ���������ֵ���
            int result = fib_recur_with_dic(n-1) + fib_recur_with_dic(n-2);
            dic[i] = result;    //�洢���
            return result;
        }
    }
}