//比较两个字符串，返回：
//0：s1==s2
//1：s1 > s2
//2：s1 < s2
#include <stdio.h>
#include <string.h>

int mycmp0(const char *s1, const char *s2)
{
    int idx = 0;
    //由于不知道会比较到哪个元素，因此采用while循环。
    while (1) { //while没什么条件可写，因此写作while(1)
        if (s1[idx] != s2[idx]) {
            break;
        } else if (s1[idx] == '\0') {   //意味着比较走到了字符串的最后
            break;
        }
        idx++;
    }

    return s1[idx] - s2[idx];
}
int mycmp1(const char *s1, const char *s2)
{
    int idx = 0;
    while (s1[idx] == s2[idx] && s1[idx] != '0') {
        idx++;
    }
    return s1[idx] - s2[idx];
}
int mycmp2(const char *s1, const char *s2)
{
    while (*s1 == *s2 && *s1 != '\0') {
        s1++;
        s2++;
    }
    return *s1 - *s2;
}

int main(int argc, char const *argv[]) {
	char s1[] = "abc";
	char s2[] = "Abc";
	printf("%d\n", mycmp1(s1, s2));
	if (mycmp1(s1, s2) == 0) {
		printf("相等\n");
	}

	return 0;
}