#include<stdio.h>
#include<stdlib.h>

float min(float n1, float n2, float n3) {
	float min = n1;
	if (n2 < min) {
		min = n2;
	}
	if (n3 < min) {
		min = n3;
	}
	return min;
}

int main(void) {
	float n1, n2, n3;
	printf("Enter 1 number:");
	scanf("%f", &n1);
	printf("Enter 2 number:");
	scanf("%f", &n2);
	printf("Enter 3 number:");
	scanf("%f", &n3);
	printf("min number is %f\n", min(n1, n2, n3));

}