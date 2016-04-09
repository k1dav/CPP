#include<stdio.h>
#include<stdlib.h>

int integerpower(int a, int b) {
	if (b == 1) {
		return a;
	}
	else 
		return a*integerpower(a, b - 1);
}

int main(void) {
	int base, power;
	printf("Enter the Number (3^4):");
	scanf("%d^%d", &base, &power);
	printf("answer is : %d \n", integerpower(base, power));
}