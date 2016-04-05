#include<stdio.h>
#include<stdlib.h>

float celsius(int f) {
	return (f - 32) * 5 / 9.0;
}

float fahrenheit(int c) {
	return c * 5 / 9.0 + 32;
}

int main(void) {
	printf("¢XC\t¢XF\n");
	for (int i = 0; i <= 100; i++) {
		printf("%d\t%.1f\n", i, fahrenheit(i));
	}
	puts("");
	printf("¢XF\t¢XC\n");
	for (int i = 32; i <= 212; i++) {
		printf("%d\t%.1f\n", i, celsius(i));
	}
	puts("");
}