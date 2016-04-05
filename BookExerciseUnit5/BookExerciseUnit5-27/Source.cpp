#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int prime(int n) {
	int counter = 0;
	for (int i = 1; i <= n / 2; i++) {
		if (n%i == 0) {
			counter ++;
		}
	}
	return counter;
}

int prime_s(int n) {
	int counter = 0;
	for (int i = 1; i <= sqrt(n); i++) {
		if (n%i == 0) {
			counter++;
		}
	}
	return counter;
}

int main(void) {
	printf("1~10000的質數有:\n");
	for (int i = 1; i <= 10000; i++) {
		if (prime(i) == 1) {
			printf("%d ", i);
		}
		if (i % 100==0) {
			puts("");
		}
	}

	puts("");
	printf("1~10000的質數有:\n");
	for (int i = 1; i <= 10000; i++) {
		if (prime_s(i) == 1) {
			printf("%d ", i);
		}
		if (i % 100 == 0) {
			puts("");
		}
	}
	puts("");
}