#include <stdio.h>
int main(void)
{
    float Mb;
    float MB;
    printf("请输入以兆位每秒为单位的下载速度:\n");
    scanf("%f", &Mb);
    printf("请输入以兆字节为单位的文件大小:\n");
    scanf("%f", &MB);
    float time = (MB * 8) / Mb;
    printf("At %.2f megabits per second, a file of %.2f megabytes downloads in %.2f seconds.\n", Mb, MB, time);

    return 0;
}