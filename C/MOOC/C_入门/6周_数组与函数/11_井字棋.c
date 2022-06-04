//通过井字棋游戏实现对二维数组矩阵的行遍历、列遍历以及对角线遍历
#include <stdio.h>
int main()
{
    const int size = 3;
    int board[size][size];  //3×3的棋盘(二维数组矩阵)
    int i, j;
    int numofX; //叉的数量
    int numofO; //圈的数量
    int result = -1;    //-1:没人赢，1：X赢，0：O赢
    //读入矩阵，双重循环做遍历，scanf读入数组中的每一个元素
    for (i=0; i<size; i++ ) {
        for (j=0; j<size; j++ ) {
            scanf("%d", &board[i][j]);
        }
    }
    //检查行
    for (i=0; i<size && result == -1; i++ ) {
        numofO = numofX = 0;    //圈的数量和叉的数量一开始是0
        for (j=0; j<size; j++ ) {   //判断这一行上的每一列（即这一行上的每一个）
            if(board[i][j] == 1){   //保持行号是不变的，列号从0到size
                numofX ++;  //如果当前元素是1，则叉的个数加一
            } else {    //否则圈的个数加一（假设是一个摆满的棋盘）
                numofO ++;
            }
        }
        if (numofO == size ) {  //如果圈的数量 = 3，则圈赢
            result = 0;
        } else if (numofX == size) {    //如果叉的数量 = 3，则叉赢
            result = 1;
        }
    }
    //若检查行发现谁也没赢，则检查列，列的算法和行相同
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
    //检查对角线
    numofO = numofX = 0;
    for (i=0; i<size; i++ ) {
        if (board[i][i] == 1) { //正对角线
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
        if( board[i][size-i-1] == 1 ) { //反对角线
            numofX ++;
        } else {
            numofO ++;
        }
    }
    //做完这四遍检查，就可以确定这张棋盘上有没有胜者
    return 0;
}