#include<stdio.h>
#include<stdlib.h>

int main(void) {
	unsigned int sum = 1;
	for (int i = 1; i <= 5; i++) {
		sum *= i;
	}
	printf("%d\n", sum);

	sum = 1;
	for (int i = 1; i <= 20; i++) {
		sum *= i;
	}
	printf("%d\n", sum);
}