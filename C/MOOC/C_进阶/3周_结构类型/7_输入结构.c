//可以在输入函数中，创建一个临时结构变量，然后把这个结构变量返回给调用者。
#include <stdio.h>
struct point {
    int x;
    int y;
};

struct point* getStruct(struct point*);
void output(struct point);
void print(const struct point *p);

int main(int argc, char const *argv[])
{
    struct point y = {0,0};
    getStruct(&y);
    output(y);
    output(*getStruct(&y)); //用*取出getstruct函数返回的东西，来作为output函数的参数。
    print(getStruct(&y));   //将getstruct函数得到的指针直接传给print函数

    return 0;
}

struct point* getStruct(struct point *p)
{
    scanf("%d", &p->x);
    scanf("%d", &p->y);
    printf("%d,%d\n", p->x, p->y);
    return p;
}//传入一个指针，在函数中对指针做一个处理后再将这个指针返回出去，好处是将来可以把它串在其它函数的调用当中
void output(struct point p)
{
    printf("%d,%d\n", p.x, p.y);
}
void print(const struct point *p)
{
    printf("%d, %d\n", p->x, p->y);
}