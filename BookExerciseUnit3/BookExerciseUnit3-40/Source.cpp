#include<stdio.h>
#include<stdlib.h>

int main(void) {
	int row = 7;
	do {
		if (row % 2 == 0) {
			printf(" ");
		}
		for (int i = 1; i <= 8; i++) {
			printf("* ");
		}
		printf("\n");
	} while (row--);
}