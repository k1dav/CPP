#include<stdio.h>
#include<stdlib.h>

int main(void) {

	float x;
	printf("Enter the x of e^x:");
	scanf("%f", &x);
	f = 1;
	for (int i = 1; i <= num; i++) {
		f *= i;
		ex = ex + pow(x, i) / f;
	}
	printf("%f\n", ex);
}