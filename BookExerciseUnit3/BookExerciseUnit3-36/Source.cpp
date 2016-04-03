#include<stdio.h>
#include<stdlib.h>

int main(void) {
	int num, n_1, n_2, n_3, n_4, n_5;
	printf("Enter the 2-Bytes number (xxxx) :");
	scanf("%d", &num);
	n_4 = num % 10;
	n_3 = (num % 100 - n_4) / 10;
	n_2 = (num % 1000 - 10 * n_3 - n_4) / 100;
	n_1 = (num - 100 * n_2 - 10 * n_3 - n_4) / 1000;

	printf("10-Bytes is %d\n", (n_1 << 3) + (n_2 << 2) + (n_3 << 1) + n_4);
}