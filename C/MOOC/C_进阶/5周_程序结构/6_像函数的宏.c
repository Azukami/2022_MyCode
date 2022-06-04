//宏可以带参数，跟普通的#define一样，空格隔开的第一个是它的名字，后面的是它的值。这个东西将来就会被替换
#include <stdio.h>

#define cube(x) ((x)*(x)*(x))

int main(int argc, char const *argv[]) {
    printf("%d\n", cube(5));

    return 0;
}
