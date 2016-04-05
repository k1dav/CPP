#include<stdio.h>
#include<stdlib.h>

int integerpower(int base, int exponent) {
	int a = 1;
	for (int i = 1; i <= exponent; i++) {
		a *= base;
	}
	return a;
}

int main(void) {
	int b, e;
	printf("Enter the Base & Exponment (2,10):");
	scanf("%d,%d", &b, &e);
	printf("%d^%d = %d\n", b, e, integerpower(b, e));
}