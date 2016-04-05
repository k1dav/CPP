#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(void) {
	printf("%f\n", fabs(7.5));
	printf("%f\n", floor(7.5));
	printf("%f\n", fabs(0.0));
	printf("%f\n", ceil(0.0));
	printf("%f\n", fabs(-6.4));
	printf("%f\n", ceil(-6.4));
	printf("%f\n", ceil(-fabs(-8+floor(-5.5))));
}