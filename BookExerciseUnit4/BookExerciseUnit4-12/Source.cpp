#include<stdio.h>
#include<stdlib.h>

int main(void) {
	int sum=0;
	for (int i = 1; i <= 30; i++) {
		if (i % 2 == 0) {
			sum += i;
		}
	}
	printf("%d\n", sum);
}