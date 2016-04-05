#include<stdio.h>
#include<stdlib.h>
#include<math.h>

float roundtointeger(float x) {
	return floor(x + .5);
}
float roundtotenths(float x) {
	return floor(x*10 + .5)/10;
}
float roundtohundredths(float x) {
	return floor(x*100 + .5)/100;
}
float roundtothousandths(float x) {
	return floor(x*1000 + .5)/1000;
}

int main(void) {
	float num;
	printf("Enter the Thousandths number:");
	scanf("%f", &num);
	printf("roundtointeger : %f\n", roundtointeger(num));
	printf("roundtotenths : %f\n", roundtotenths(num));
	printf("roundtohundredths : %f\n", roundtohundredths(num));
	printf("roundtothousandths : %f\n", roundtothousandths(num));
}