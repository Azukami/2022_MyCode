//ͨ����������Ϸʵ�ֶԶ�ά���������б������б����Լ��Խ��߱���
#include <stdio.h>
int main()
{
    const int size = 3;
    int board[size][size];  //3��3������(��ά�������)
    int i, j;
    int numofX; //�������
    int numofO; //Ȧ������
    int result = -1;    //-1:û��Ӯ��1��XӮ��0��OӮ
    //�������˫��ѭ����������scanf���������е�ÿһ��Ԫ��
    for (i=0; i<size; i++ ) {
        for (j=0; j<size; j++ ) {
            scanf("%d", &board[i][j]);
        }
    }
    //�����
    for (i=0; i<size && result == -1; i++ ) {
        numofO = numofX = 0;    //Ȧ�������Ͳ������һ��ʼ��0
        for (j=0; j<size; j++ ) {   //�ж���һ���ϵ�ÿһ�У�����һ���ϵ�ÿһ����
            if(board[i][j] == 1){   //�����к��ǲ���ģ��кŴ�0��size
                numofX ++;  //�����ǰԪ����1�����ĸ�����һ
            } else {    //����Ȧ�ĸ�����һ��������һ�����������̣�
                numofO ++;
            }
        }
        if (numofO == size ) {  //���Ȧ������ = 3����ȦӮ
            result = 0;
        } else if (numofX == size) {    //���������� = 3�����Ӯ
            result = 1;
        }
    }
    //������з���˭ҲûӮ�������У��е��㷨������ͬ
    if (result == -1 ) {
        for (j=0; j<size && result == -1; j++) {
            numofO = numofX = 0;
            for (i=0; i<size; i++ ) {
                if( board[i][j] == 1) {
                    numofX ++;
                } else {
                    numofO ++;
                }
            }
            if (numofO == size ) {
                result = 0;
            } else if (numofX == size) {
                result = 1;
            }
        }
    }
    //���Խ���
    numofO = numofX = 0;
    for (i=0; i<size; i++ ) {
        if (board[i][i] == 1) { //���Խ���
            numofX ++;
        } else {
            numofO ++;
        }
    }
    if (numofO == size) {
        result == 0;
    } else if (numofX == size ) {
        result = 1;
    }
    numofO = numofX = 0;
    for (i=0; i<size; i++) {
        if( board[i][size-i-1] == 1 ) { //���Խ���
            numofX ++;
        } else {
            numofO ++;
        }
    }
    //�������ı��飬�Ϳ���ȷ��������������û��ʤ��
    return 0;
}