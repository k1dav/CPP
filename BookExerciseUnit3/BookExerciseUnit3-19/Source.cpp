#include<stdio.h>
#include<stdlib.h>

int main(void) {
	float sales;
	while (1) {
		printf("Enter sales in dollars (-1 to end):");
		scanf("%f", &sales);
		if (sales == -1) {
			break;
		}
		printf("Salary is: $%.2f\n", 200 + sales*0.09);
		puts("");
	}
}