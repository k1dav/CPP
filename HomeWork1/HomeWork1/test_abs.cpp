#include<stdio.h>
#include<stdlib.h>

float abs(float a, float b) {	//µ´¹ï­È
	if (a >= b)
		return a - b;
	else
		return b - a;
}

float maint(void){
	float a, b;
	scanf("%f", &a);
	scanf("%f", &b);
	printf("answer is %f", abs(a, b));
}