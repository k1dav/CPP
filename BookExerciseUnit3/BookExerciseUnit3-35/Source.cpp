#include<stdio.h>
#include<stdlib.h>

int main(void) {
	int num, n_1, n_2, n_3, n_4, n_5;
	printf("Enter the number (xxxxx) :");
	scanf("%d", &num);
	n_5 = num % 10;
	n_4 = (num % 100 - n_5) / 10;
	n_3 = (num % 1000 - 10 * n_4 - n_5) / 100;
	n_2 = (num % 10000 - 100 * n_3 - 10 * n_4 - n_5) / 1000;
	n_1 = (num - 1000 * n_2 - 100 * n_3 - 10 * n_4 - n_5) / 10000;

	if ((n_1 == n_5) && (n_2 == n_4)) {
		printf("Yes\n");
	}
	else
		printf("No\n");
}