#include <stdio.h>
#define STR_LEN 20

typedef struct _student
{
    char name[STR_LEN];
    int gender;
    int age;
} Student;

void read(FILE *fp, int index);

int main(int argc, char const *argv[])
{
    FILE *fp = fopen("student.txt", "r");
    if (fp) {
        fseek(fp, 0L, SEEK_END);
        long size = ftell(fp);
        int number = size / sizeof(Student);
        int index = 0;
        printf("有%d个数据，你要看第几个：", number);
        scanf("%d", &index);
        read(fp, index-1);
        fclose(fp);
    }

    return 0;
}

void read(FILE *fp, int index)
{
    fseek(fp, index*sizeof(Student), SEEK_SET);//从文件头走到文件尾
    Student stu;
    if (fread(&stu, sizeof(Student), 1, fp) == 1) {
        printf("第%d个学生：", index+1);
        printf("\t姓名：%s\n", stu.name);
        printf("\t性别：");
        switch (stu.gender) {
            case 0: printf("男\n"); break;
            case 1: printf("女\n"); break;
            case 2: printf("其他\n"); break;
        }
        printf("\t年龄：%d\n", stu.age);
    }
}