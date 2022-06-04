//C的编译器里有一些预先定义的宏。它们都是前面有两个下划线，后面有两个下划线。
//这些宏一般是用来表达一些特殊的东西的，可以让编译器替用户插入一些特殊的值。
#include <stdio.h>

int main(int argc, char const *argv[]) {
    printf("%s:%d\n", __FILE__, __LINE__);
    printf("%s,%s\n", __DATE__, __TIME__);

    return 0;
}
