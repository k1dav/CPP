#include<stdio.h>
#include<stdlib.h>

int main(void) {
	float num, large=0;

	for (int i = 1; i <= 10; i++) {
		printf("Enter the %d number:", i);
		scanf("%f", &num);

		if (num > large) {
			large = num;
		}
	}

	printf("The max is %.2f", large);
}