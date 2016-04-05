#include<stdio.h>
#include<stdlib.h>

void perfect(int a) {
	int sum = 0;

	for (int i = 1; i < a; i++) {

		if (a%i == 0) {
			sum += i;
		}
	}
	if (sum == a) {

		printf("%d is perfect number\n", a);
		printf("%d's factor is :", a);

		for (int j = 1; j <= a; j++) {

			if (a%j == 0) {
				printf("%d ", j);
			}

		}
		puts("");

	}
}

int main(void) {
	printf("perfect number (1~1000)\n");
	for (int i = 1; i <= 1000; i++) {
		perfect(i);
	}
}