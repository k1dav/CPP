#include<stdio.h>
#include<stdlib.h>

int main(void) {
	double pi = 0,one=1;
	for (int i = 1; i <= 1000000000; i = i + 2) {
		pi = pi + 4.0 / i*one;
		one *= -1;
	}
	printf("%lf", pi);
}