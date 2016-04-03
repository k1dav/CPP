#include<stdio.h>
#include<stdlib.h>

int main(void) {
	float loan, rate, days;
	while (1) {
		printf("Enter loan principal (-1 to end):");
		scanf("%f", &loan);
		if (loan == -1) {
			break;
		}
		printf("Enter intereset rate:");
		scanf("%f", &rate);
		printf("Enter terms of the loan in days:");
		scanf("%f", &days);
		printf("The interest charge is $%.2f\n", loan*rate*days / 365);
		puts("");
	}

}