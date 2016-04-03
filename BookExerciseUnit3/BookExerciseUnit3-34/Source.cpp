#include<stdio.h>
#include<stdlib.h>

int main(void) {

	int side;
	printf("Enter the side for square:");
	scanf("%d", &side);

	for (int i = 1; i <= side; i++) {

		if (i == 1 || i == side) {

			for (int j = 1; j <= side; j++) {
				printf("*");
			}

			puts("");

		}

		else {

			for (int j = 1; j <= side; j++) {

				if (j == 1 || j == side) {
					printf("*");
				}

				else {
					printf(" ");
				}
		}
			puts("");
		}
	}
}