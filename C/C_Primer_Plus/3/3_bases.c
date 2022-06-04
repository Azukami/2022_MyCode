#include <stdio.h>
/*bases.c --以十进制、八进制、十六进制打印十进制数100 */
int main(void)
{
    int x = 100;
    //不带前缀打印
    printf("dec = %d; octal = %o; hex = %x\n", x, x, x);
    //带前缀打印
    printf("dec = %d; octal = %#o; hex = %#x\n", x, x, x);

    return 0;
}