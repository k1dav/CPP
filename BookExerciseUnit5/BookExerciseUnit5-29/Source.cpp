#include<stdio.h>
#include<stdlib.h>

int gcm(int a, int b) {
	if (a > b) {
		for (int i = b; i >= 1; i--) {
			if (a%i == 0 && b%i == 0) {
				return i;
			}
		}
	}
	else {
		for (int i = a; i >= 1; i--) {
			if (a%i == 0 && b%i == 0) {
				return i;
			}
		}
	}
}

int main(void) {
	int n1, n2;
	printf("Enter the Two number:");
	scanf("%d %d", &n1, &n2);
	printf("GCM is %d\n", gcm(n1, n2));
}