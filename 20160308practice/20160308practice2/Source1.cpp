#include <stdio.h>
#include <stdlib.h>

int main1(void)
{
	int  h,w, bmi;
	printf("Input Your Height:(M)");
	scanf("%d",h);
	printf("Input Your Weight:(Kg)");
	scanf("%d",w);
	bmi = w / (h*h);
	printf("Your BMI is %d", bmi);
	return0;
}