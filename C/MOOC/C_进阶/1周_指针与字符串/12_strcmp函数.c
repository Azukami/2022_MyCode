//�Ƚ������ַ��������أ�
//0��s1==s2
//1��s1 > s2
//2��s1 < s2
#include <stdio.h>
#include <string.h>

int mycmp0(const char *s1, const char *s2)
{
    int idx = 0;
    //���ڲ�֪����Ƚϵ��ĸ�Ԫ�أ���˲���whileѭ����
    while (1) { //whileûʲô������д�����д��while(1)
        if (s1[idx] != s2[idx]) {
            break;
        } else if (s1[idx] == '\0') {   //��ζ�űȽ��ߵ����ַ��������
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
		printf("���\n");
	}

	return 0;
}