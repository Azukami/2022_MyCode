#include <stdio.h>

int main()
{
    int x;
    //scanf("%d", &x);
    x = 700;
    int digit;//digit��ʾx��ÿһλ��
    int ret = 0;//���
    while(x > 0) {
        digit = x % 10;
        printf("%d", digit);
        ret = ret * 10 + digit;//ԭ���Ľ��������һλ�ټ���digit
        //printf("x = %d, digit = %d, ret = %d\n", x, digit, ret);//����
        x /= 10;//�������ұߣ���ȡ���ģ���һλ��
    }
    //printf("%d", ret);

    return 0;
}