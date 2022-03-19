#include <stdio.h>

int main()
{
	int year = 0;
	int month = 0;
	int day = 0;
	
	scanf("%d-%d-%d", &month, &day, &year);
	if (month < 10 && day < 10) {
		printf("%d-0%d-0%d\n", year, month, day);
	}
	if (month > 10 && day < 10) {
		printf("%d-%d-0%d\n", year, month, day);
	}
	if (month < 10 && day > 10) {
		printf("%d-0%d-%d\n", year, month, day);
	}
	if (month > 10 && day > 10) {
		printf("%d-%d-%d\n", year, month, day);
	}
	
	return 0;
}
