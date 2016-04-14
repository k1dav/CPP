#include<stdio.h>

int main(void) {
	while (1){
		int y;
		scanf("%d", &y);
		if (y == 0) {
			break;
		}
		if ((y % 400 == 0) || (y % 100 != 0 && y % 4 == 0)) {
			printf("a leap year\n");
		}
		else
			printf("a normal year\n");
	}
}