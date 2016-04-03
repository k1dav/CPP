#include<stdio.h>
#include<stdlib.h>

int main(void) {
	float r;
	printf("Enter the R of circle:");
	scanf("%f", &r);
	printf("2r = %f\n", 2 * r);
	printf("Perimeter = %f \n", 2 * r*3.141592);
	printf("Area = %f \n", 3.141592*r*r);
}