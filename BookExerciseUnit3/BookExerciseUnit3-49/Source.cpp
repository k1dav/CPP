#include<stdio.h>
#include<stdlib.h>

int main(void) {
	int num, n_1, n_2, n_3, n_4;
	printf("Enter the unencrypted number:");
	scanf("%d", &num);

	n_4 = num % 10;
	n_3 = (num % 100 - n_4) / 10;
	n_2 = (num % 1000 - 10 * n_3 - n_4) / 100;
	n_1 = (num - 100 * n_2 - 10 * n_3 - n_4) / 1000;

	n_1 = (n_1 + 7) % 10;
	n_2 = (n_2 + 7) % 10;
	n_3 = (n_3 + 7) % 10;
	n_4 = (n_4 + 7) % 10;

	int temp = n_1;
	n_1 = n_3;
	n_3 = temp;

	temp = n_2;
	n_2 = n_4;
	n_4 = temp;

	printf("%d%d%d%d\n", n_1, n_2, n_3, n_4);
	puts("");

	printf("Enter the encrypted number:");
	scanf("%d", &num);

	n_4 = num % 10;
	n_3 = (num % 100 - n_4) / 10;
	n_2 = (num % 1000 - 10 * n_3 - n_4) / 100;
	n_1 = (num - 100 * n_2 - 10 * n_3 - n_4) / 1000;

	temp = n_1;
	n_1 = n_3;
	n_3 = temp;

	temp = n_2;
	n_2 = n_4;
	n_4 = temp;

	n_1 = (n_1 + 3) % 10;
	n_2 = (n_2 + 3) % 10;
	n_3 = (n_3 + 3) % 10;
	n_4 = (n_4 + 3) % 10;

	printf("%d%d%d%d\n", n_1, n_2, n_3, n_4);
	puts("");
}