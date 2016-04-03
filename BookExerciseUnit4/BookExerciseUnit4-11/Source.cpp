#include<stdio.h>
#include<stdlib.h>

int main(void) {
	int smallest, num, num1;
	printf("How many number to be Enter:");
	scanf("%d", &num);
	for (int i = 1; i <= num; i++) {
		printf("Enter the number:");
		scanf("%d", &num1);
		if (i == 1 || smallest > num1) {
			smallest = num1;
		}
	}
	printf("The smallest number is %d", smallest);
}