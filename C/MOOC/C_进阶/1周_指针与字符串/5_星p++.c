//*p++的意思是：取出p所指的那个数据，完事之后顺便把p移动到下一个位置上去。
#include <stdio.h>
int main(void)
{
    char ac[] = {0,1,2,3,4,5,6,7,8,9,-1};
    char *p = &ac[0];   //含义和char *p = ac;一致
    //之前的数组遍历方式
    int i;
    for (i=0; i<sizeof(ac)/sizeof(ac[0])-1; i++) {
        printf("%d\t", ac[i]);
    }
    printf("\n");
    //另一种数组遍历的方式
    for(p=ac; *p!=-1; p++) {
        printf("%d\t", *p);
    }
    printf("\n");
    //也可以
    while(*p!=-1) {
        printf("%d\t", *p++);
    }
    printf("\n");
    
    int ai[] = {0,1,2,3,4,5,6,7,8,9,};
    int *q = ai;

    return 0;
}