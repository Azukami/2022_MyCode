//*p++����˼�ǣ�ȡ��p��ָ���Ǹ����ݣ�����֮��˳���p�ƶ�����һ��λ����ȥ��
#include <stdio.h>
int main(void)
{
    char ac[] = {0,1,2,3,4,5,6,7,8,9,-1};
    char *p = &ac[0];   //�����char *p = ac;һ��
    //֮ǰ�����������ʽ
    int i;
    for (i=0; i<sizeof(ac)/sizeof(ac[0])-1; i++) {
        printf("%d\t", ac[i]);
    }
    printf("\n");
    //��һ����������ķ�ʽ
    for(p=ac; *p!=-1; p++) {
        printf("%d\t", *p);
    }
    printf("\n");
    //Ҳ����
    while(*p!=-1) {
        printf("%d\t", *p++);
    }
    printf("\n");
    
    int ai[] = {0,1,2,3,4,5,6,7,8,9,};
    int *q = ai;

    return 0;
}