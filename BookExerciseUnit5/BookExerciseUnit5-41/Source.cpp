#include<stdio.h>
#include<stdlib.h>
#include<math.h>

double distance(double x1, double x2, double y1, double y2) {
	return sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
}

int main(void) {
	double x1, x2, y1, y2;
	printf("Enter x1, x2, y1, y2\n");
	scanf("%lf %lf %lf %lf", &x1, &x2, &y1, &y2);
	printf("distance is %.2lf\n", distance(x1, x2, y1, y2));
}