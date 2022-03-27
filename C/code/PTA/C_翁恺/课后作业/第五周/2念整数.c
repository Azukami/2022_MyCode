#include <stdio.h>
/*读入一个整数，然后用汉语拼音将这个整数的每一位输出出来
输入1234，输出 yi er san si 
每个字的拼音之间有一个空格，但是最后的字后面没有空格。
当遇到负数时，在输出的开头加上fu，如-2341输出为：
fu er san si yi*/
int main()
{
    int x;
    scanf("%d", &x);//读入整数
    int mask = 1;
    if(x >= 0) {
        int t = x;//存储x的值
        while (t > 9) {
            t /= 10;
            mask *= 10;
        }
        do {
            int d = x / mask;
            switch(d) {
                case 0: printf("ling"); break;
                case 1: printf("yi"); break;
                case 2: printf("er"); break;
                case 3: printf("san"); break;
                case 4: printf("si"); break;
                case 5: printf("wu"); break;
                case 6: printf("liu"); break;
                case 7: printf("qi"); break;
                case 8: printf("ba"); break;
                case 9: printf("jiu"); break;
            } if (mask > 9) {
                printf(" ");
            }
            x %= mask;
            mask /= 10;
        } while(mask > 0);
    } else {
        int t = -x;
        int a = -x;
        while (t > 9) {
            t /= 10;
            mask *= 10;
        }
        printf("fu ");
        do {
            int d = a / mask;
            switch(d) {
                case 0: printf("ling"); break;
                case 1: printf("yi"); break;
                case 2: printf("er"); break;
                case 3: printf("san"); break;
                case 4: printf("si"); break;
                case 5: printf("wu"); break;
                case 6: printf("liu"); break;
                case 7: printf("qi"); break;
                case 8: printf("ba"); break;
                case 9: printf("jiu"); break;
            } if (mask > 9) {
                printf(" ");
            }
            a %= mask;
            mask /= 10;
        } while(mask > 0);
    }
    
    return 0;
}