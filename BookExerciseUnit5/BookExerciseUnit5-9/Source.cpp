#include<stdio.h>
#include<stdlib.h>
#include<math.h>

float calaculateCharges(float a) {
	a = ceil(a);
	if (a <= 3) {
		return 2;
	}
	else if (a > 3&&a<=19) {
		return 2 + (a - 3)*0.5;
	}
	else {
		return 10;
	}
}

int main(void) {
	float hour,summ=0,sumh=0;
	
	for (int i = 1; i <= 3; i++) {
		printf("Enter the hour:");
		scanf("%f", &hour);
		
		printf("Car\tHours\tCharge\n");
		printf("%d\t", i);
		printf("%.2f\t", hour);
		printf("%.2f\n", calaculateCharges(hour));
		summ += calaculateCharges(hour);
		sumh += hour;
	}
	printf("Total\t%.2f\t%.2f\n", sumh, summ);
}