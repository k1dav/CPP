#include<stdio.h>
#include<stdlib.h>

void evenodd(int a) {
	if (a % 2 == 1) {
		printf("Odd\n");
	}
	else
		printf("Even\n");
}

int main(void) {
	int num;
	printf("Enter the num:");
	scanf("%d", &num);
	evenodd(num);
}