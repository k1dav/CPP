#include<stdio.h>
#include<stdlib.h>

int main(void) {
	unsigned int sum = 1;
	for (int i = 1; i <= 15; i++) {
		if (i % 2 == 1) {
			sum *= i;
		}
	}
	printf("%d\n", sum);
}