#include <stdio.h>

int main(){
    
    int N, M;
    int hour = 0;
    int minute = 0;
    int S_hour = 0;
    int S_minute = 0;
    scanf("%d%d", &N, &M);
    
    minute = N % 100;
    hour = N / 100;
    
    if(M >=0){
        S_hour = M / 60; //ȡ������ʱ��Ϊ����Сʱ
        S_minute = M % 60;//����ʱ��ȡСʱ����ķ���
    
        if(S_minute + minute >= 60){//����ʱ��ȡ����ķ��������뵱ǰʱ��ķ�����֮��>60����Сʱ���1
            printf("%d\n", (hour + S_hour+1)*100 + (minute+S_minute)%60);
        }else{
            printf("%d\n", (hour + S_hour)*100 + (minute+S_minute));
        }
    }else{
        M = -M; //�㵱ǰʱ���֮ǰʱ��
        S_hour = M / 60;
        S_minute = M % 60;
        
        
        if(minute - S_minute >=0){
            if(hour - S_hour != 0){
                 printf("%d\n", (hour - S_hour)*100 + (minute-S_minute));
            }else{
                printf("0%d\n", (minute-S_minute));
            }           
        }else {
            if(hour - S_hour - 1 != 0){
                printf("%d\n", (hour - S_hour - 1)*100 + (60-S_minute + minute));
            }else{
                printf("0%d\n", (60 + minute - S_minute));
            }            
        }
}
    
    
    return 0;
}
