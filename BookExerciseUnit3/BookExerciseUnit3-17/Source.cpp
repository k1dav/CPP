#include<stdio.h>
#include<stdlib.h>

int main(void) {
	float gas, t_gas=0;
	float mile, t_mile=0;
	while (1) {
		printf("Enter the gallons used (-1 to end):");
		scanf("%f", &gas);
		if (gas == -1) {
			puts("");
			break;
		}
		t_gas += gas;
		printf("Enter the miles driven:");
		scanf("%f", &mile);
		t_mile += mile;
		printf("The miles / gallons for this tank was %.4f\n", mile / gas);
		puts("");
	}
	printf("The overall average miles / gallons was %.4f\n", t_mile / t_gas);
}