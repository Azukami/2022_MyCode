#include <stdio.h>
void test(int &x)
{
    x = 1024;
    printf("test�����ڲ� x=%d\n", x);
}
int main(int argc, char const *argv[])
{
    int x = 1;
    printf("����testǰ��x=%d\n", x);
    test(x);
    printf("����test��x=%d\n", x);

    return 0;
}
