#include<stdio.h>

int main(void) {
	int y;
	scanf("%d", &y);
	if ((y % 400 == 0) || (y % 100 != 0 && y % 4 == 0)) {
		printf("a leap year\n");
	}
	else {
		printf("a normal year\n");
	}
	return 0;
}