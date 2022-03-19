#include <stdio.h>

int main()
{
    const int PASS = 60; /*及格线*/
    int score;

    printf("请输入您的成绩：\n");
    scanf("%d", &score);

    printf("您输入的成绩是%d。\n", score);

    if(score < PASS) {
        printf("很遗憾，您的成绩没有及格。");
    } else {
        printf("恭喜，您的成绩及格了。");
    }
    printf("再见。\n");

    return 0;
}