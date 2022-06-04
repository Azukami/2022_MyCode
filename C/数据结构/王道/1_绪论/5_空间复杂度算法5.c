#include <stdio.h>
//Ëã·¨5¡ª¡ªµÝ¹éÐÍ°®Äã
void loveYou(int n);
int main()
{
    loveYou(5);

    return 0;
}
void loveYou(int n)
{
    int a,b,c;
    int i = 1;
    for (i=1; i<=n; i++) {
        //printf("I love you %d.\n", i);
    }
    if (n > 1) {
        loveYou(n-1);
    }
    printf("I Love You %d.\n", n);
}