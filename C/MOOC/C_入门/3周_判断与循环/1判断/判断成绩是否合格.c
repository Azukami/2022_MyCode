#include <stdio.h>

int main()
{
    const int PASS = 60; /*������*/
    int score;

    printf("���������ĳɼ���\n");
    scanf("%d", &score);

    printf("������ĳɼ���%d��\n", score);

    if(score < PASS) {
        printf("���ź������ĳɼ�û�м���");
    } else {
        printf("��ϲ�����ĳɼ������ˡ�");
    }
    printf("�ټ���\n");

    return 0;
}