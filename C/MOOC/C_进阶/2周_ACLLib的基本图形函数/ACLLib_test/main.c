#include "acllib.h"
#include <stdio.h>

int Setup() {	//����acllib�������ں���
	initConsole();//���Ե���printf����
	printf("�����ȣ�");
	int width;
	scanf("%d", &width);
	//��ʼ��һ������ACLLib_test�Ĵ���
	initWindow("ACLLib_test", DEFAULT, DEFAULT, width, width);	//��ʾ��100��100�ĵط���һ��200��200�Ĵ���
	//��ͼ,���л�ͼ�Ķ���Ҫ��������beginPaint��endPaint֮��
	beginPaint();
	setPenColor(BLUE);
	setPenWidth(1);	//Ҫ����������
	setPenStyle(PEN_STYLE_DASHDOTDOT);
	line(20, 20, width - 20, width - 20);	//��20,20�����-20�ĵط�������
	putPixel(100, 150, RGB(255, 0, 255));
	endPaint();

	return 0;
}