#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(void) {
	float num;
	printf("Enter the Number:");
	scanf("%f", &num);
	printf("%f", floor(num + .5));
}