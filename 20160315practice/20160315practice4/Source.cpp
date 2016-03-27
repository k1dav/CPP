#include<stdio.h>
#include<stdlib.h>

//C(n,r)­È

int main(void) {
	int n, r;

	printf("C(n,r)\n");
	printf("Please input n:");
	scanf("%d", &n);
	printf("Please input r:");
	scanf("%d", &r);

	int n1 = n - r;   //(n-r)!

	for (int i = n-1; i > 0; i--) {
		n = n*i;
	}
	for (int i = r - 1; i > 0; i--) {
		r = r*i;
	}
	for (int i = n1 - 1; i > 0; i--) {
		n1 = n1*i;
	}

	printf("C(n,r) = %f\n", (float)n / (r*n1));


}