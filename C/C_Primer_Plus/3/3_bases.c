#include <stdio.h>
/*bases.c --��ʮ���ơ��˽��ơ�ʮ�����ƴ�ӡʮ������100 */
int main(void)
{
    int x = 100;
    //����ǰ׺��ӡ
    printf("dec = %d; octal = %o; hex = %x\n", x, x, x);
    //��ǰ׺��ӡ
    printf("dec = %d; octal = %#o; hex = %#x\n", x, x, x);

    return 0;
}