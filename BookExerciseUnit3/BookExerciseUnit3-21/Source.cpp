#include<stdio.h>
#include<stdlib.h>

int main(void) {
	int hours;
	float rate;
	
	while (1) {
		printf("Enter # of hours worked (-1 to end):");
		scanf("%d", &hours);
		if (hours == -1) {
			break;
		}
		printf("Enter hourly rate of the worker ($00.00):");
		scanf("%f", &rate);
		
		if (hours > 40) {
			printf("Salary is $%.2f\n", 40 * rate + (hours - 40)*rate*1.5);
		}
		else {
			printf("Salary is $%.2f\n", rate*hours);
		}
		puts("");
	}
}