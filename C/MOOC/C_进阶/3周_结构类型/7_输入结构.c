//���������뺯���У�����һ����ʱ�ṹ������Ȼ�������ṹ�������ظ������ߡ�
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
    output(*getStruct(&y)); //��*ȡ��getstruct�������صĶ���������Ϊoutput�����Ĳ�����
    print(getStruct(&y));   //��getstruct�����õ���ָ��ֱ�Ӵ���print����

    return 0;
}

struct point* getStruct(struct point *p)
{
    scanf("%d", &p->x);
    scanf("%d", &p->y);
    printf("%d,%d\n", p->x, p->y);
    return p;
}//����һ��ָ�룬�ں����ж�ָ����һ��������ٽ����ָ�뷵�س�ȥ���ô��ǽ������԰����������������ĵ��õ���
void output(struct point p)
{
    printf("%d,%d\n", p.x, p.y);
}
void print(const struct point *p)
{
    printf("%d, %d\n", p->x, p->y);
}