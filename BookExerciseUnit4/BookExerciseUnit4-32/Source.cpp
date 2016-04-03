#include<stdio.h>
#include<stdlib.h>

int main(void) {
	int onum;
	printf("Enter the odd number:");
	scanf("%d", &onum);
	for (int i = 1; i <= (onum - 1) / 2; i++) {
		for (int j = (onum + 1) / 2 - i; j >= 1; j--) {
			printf(" ");
		}
		for (int k = 1; k <= 2 * i - 1; k++) {
			printf("*");
		}
		puts("");
	}

	for (int i = 1; i <= onum; i++) {
		printf("*");
	}
	puts("");

	for (int i = (onum - 1) / 2; i >= 1; i--) {
		for (int j = (onum + 1) / 2 - i; j >= 1; j--) {
			printf(" ");
		}
		for (int k = 1; k <= 2 * i - 1; k++) {
			printf("*");
		}
		puts("");
	}
}