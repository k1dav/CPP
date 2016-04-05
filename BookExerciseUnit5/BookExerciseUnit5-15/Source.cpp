#include<stdio.h>
#include<stdlib.h>
#include<math.h>

double hyoptenuse(double side1, double side2) {
	return sqrt(side1*side1 + side2*side2);
}

int main(void) {
	double side1, side2;
	printf("Enter the Side1,Side2 (3 4):");
	scanf("%lf %lf", &side1, &side2);
	printf("side3 is %.2lf \n", hyoptenuse(side1, side2));
}