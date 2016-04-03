#include<stdio.h>
#include<stdlib.h>

int main(void) {
	int row;
	printf("請輸入列數:");
	scanf("%d", &row);

	while (row % 2 == 0) {
		printf("請重新輸入列數:");
		scanf("%d", &row);
	}

	for (int i = 1; i <= (row - 1) / 2; i++) {
		for (int j = (row - 1) / 2 - i + 1; j >= 1; j--) {
			printf(" ");
		}
		for (int k = 1; k <= 2 * i - 1; k++) {
			printf("*");
		}
		printf("\n");
	}

	for (int i = 1; i <= row; i++) {
		printf("*");
	}
	puts("");

	for (int i = (row - 1) / 2; i >=1 ; i--) {
		for (int j = 1; j <= (row - 1) / 2 - i + 1; j++) {
			printf(" ");
		}
		for (int k = 2 * i - 1; k >=1 ; k--) {
			printf("*");
		}
		puts("");
	}

	printf("請輸入列數:");
	scanf("%d", &row);
	for (int i = 1; i <= row; i++) {
		for (int j = row - i; j >= 1; j--) {
			printf(" ");
		}
		for (int k = 1; k <= i; k++) {
			printf("*");
		}
		puts("");
	}
}