#include <stdio.h>

int main()
{
	int D = 0;
	scanf("%d", &D);
	if (D + 2 <= 7) {
		printf("%d\n", D + 2);
	}
	else {
		printf("%d\n", (D + 2) % 7);
	}
	
	return 0;
}
