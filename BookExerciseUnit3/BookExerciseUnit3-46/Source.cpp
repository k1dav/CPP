#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(void) {
	int num, f = 1;
	float e = 1, ex = 1;

	printf("Enter the number of factorial:");
	scanf("%d", &num);
	for (int i = 1; i <= num; i++) {
		f *= i;
	}
	printf("sum is %d\n", f);
	puts("");

	f = 1;
	for (int i = 1; i <= num; i++) {
		f *= i;
		e = e + 1.0 / f;
	}

	printf("%f\n", e);
	puts("");

	float x;
	printf("Enter the x of e^x:");
	scanf("%f", &x);
	f = 1;
	for (int i = 1; i <= num; i++) {
		f *= i;
		ex = ex + pow(x,i) / f;
	}
	printf("%f\n", ex);
	puts("");
}