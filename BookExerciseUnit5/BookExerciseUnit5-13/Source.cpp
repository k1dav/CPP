#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void) {
	srand(time(NULL));
	int n;
	n = rand() % 2 + 1;
	printf("%d\n", n);
	puts("");

	n = rand() % 100 + 1;
	printf("%d\n", n);
	puts("");

	n = rand() % 10;
	printf("%d\n", n);
	puts("");

	n = rand() % 113+1000;
	printf("%d\n", n);
	puts("");

	n = rand() % 3 - 1;
	printf("%d\n", n);
	puts("");

	n = rand() % 15 - 3;
	printf("%d\n", n);
	puts("");

}