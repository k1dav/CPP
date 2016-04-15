#include<stdio.h>

int main(void) {
	int num;
	scanf("%d", &num);
	if (num % 2 == 0) {
		printf("Even\n");
	}
	else
		printf("Odd\n");
}