#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void) {
	srand(time(NULL));
	int n;

	n = rand() % 10 + 1;
	while (n % 2 != 0) {
		n = rand() % 10 + 1;
	}
	printf("%d\n", n);
	puts("");

	n = rand() % 9 + 3;
	while (n % 2 != 1) {
		n = rand() % 9 + 3;
	}
	printf("%d\n", n);
	puts("");

	n = rand() % 17 + 6;
	while (n % 4 != 2) {
		n = rand() % 17 + 6;
	}
	printf("%d\n", n);
	puts("");

}