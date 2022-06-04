#include "acllib.h"
#include <stdio.h>

int Setup() {	//这是acllib程序的入口函数
	initConsole();//可以调用printf函数
	printf("输入宽度：");
	int width;
	scanf("%d", &width);
	//初始化一个叫做ACLLib_test的窗口
	initWindow("ACLLib_test", DEFAULT, DEFAULT, width, width);	//表示在100到100的地方画一个200到200的窗口
	//画图,所有画图的东西要常出现在beginPaint和endPaint之间
	beginPaint();
	setPenColor(BLUE);
	setPenWidth(1);	//要三个点宽的线
	setPenStyle(PEN_STYLE_DASHDOTDOT);
	line(20, 20, width - 20, width - 20);	//从20,20到宽度-20的地方画条线
	putPixel(100, 150, RGB(255, 0, 255));
	endPaint();

	return 0;
}