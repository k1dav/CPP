#include<stdio.h>

int main(void) {
	int y;
	while (scanf("%d", &y) != EOF) {
		if ((y % 400 == 0) || (y % 100 != 0 && y % 4 == 0)) {
			printf("¶|¦~\n");
		}
		else
			printf("¥­¦~\n");
	}
}