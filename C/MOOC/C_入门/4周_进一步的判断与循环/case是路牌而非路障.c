#include <stdio.h>

int main()
{
    int type;
    scanf("%d", &type);

    switch (type)
    {
        case 1:
        case 2:
            printf("���\n");
            break;
        case 3:
            printf("���Ϻ�\n");
        case 4:
            printf("�ټ�\n");
            break;
        default:
            printf("����ʲô����\n");
            break;
    }

    return 0;
}