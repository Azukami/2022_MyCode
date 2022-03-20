#include <stdio.h>
//通过数据类型来创造合适的常量与变量
//类型的使用：
int weight = 120;
int salary = 200000;
/*生活中的一些数据：
有些数据是不能变的：血型、性别、圆周率
有些数据可变：工资、年龄、体重
C语言描述可变数据和不可变数据：变量和常量。
常量 - 不能改变的量
变量 - 能被改变的量*/
//定义变量的方法
int age = 150;
float weight2 = 45.5f;
char ch = 'w';
/*变量的分类：
局部变量
全局变量*/
/*当局部变量和全局变量名字冲突的情况下，局部优先，不建议全局变量和局部变量用一个名字*/
int a = 100;
int function()
{
    //在大括号{}内部定义的变量都被称为局部变量
    //在大括号{}外定义的变量是全局变量
    int a = 10;
    printf("%d\n", a);
    return 0;
}//输出的结果为10，说明局部变量优先。
//变量如何使用：写个代码，求两个整数相加
int add()
{
    int a = 0;
    int b = 0;
    scanf("%d %d", &a, &b);//scanf函数是输入函数,&为取地址
    printf("%d", a+b);

    return 0;
}
int main()
{
    int age = 20;//创建的一个int类型变量，age是变量的名字
    double weight = 75.3;//变量意味着可改
    age++;
    weight = weight - 20;
    printf("%d\n", age);
    printf("%lf\n", weight);//打印双精度浮点型用%lf，打印单精度浮点型用%f
    function(a);//输出的结果为10，因此局部变量优先
    add();
    return 0;
}
/*
%d  - 整型
%f  - float
%lf - double
*/
//模仿代码不是抄写代码，要理清思路，不看别人的代码，按照别人的思路，按照语法来写代码。
