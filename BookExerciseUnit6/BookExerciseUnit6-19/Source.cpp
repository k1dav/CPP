#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void) {
	int result[13] = { 0 };
	srand(time(NULL));
	int a, b;

	for (int i = 1; i <= 36000; i++) {
		a = rand() % 6 + 1;
		b = rand() % 6 + 1;
		result[a + b]++;
	}



	for (int i = 2; i <= 12; i++) {
		printf("%d : %d\n", i, result[i]);
	}
}