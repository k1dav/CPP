#include<stdio.h>
#include<stdlib.h>

int main(void) {
	int n1, n2, n3, n4, n5;
	printf("Enter the first number:");
	scanf("%d", &n1);
	printf("Enter the second number:");
	scanf("%d", &n2);
	printf("Enter the third number:");
	scanf("%d", &n3);
	printf("Enter the fourth number:");
	scanf("%d", &n4);
	printf("Enter the fifth number:");
	scanf("%d", &n5);

	printf("%d\t", n1);
	for (int i = 1; i <= n1; i++) {
		printf("*");
	}
	puts("");
	printf("%d\t", n2);
	for (int i = 1; i <= n2; i++) {
		printf("*");
	}
	puts("");
	printf("%d\t", n3);
	for (int i = 1; i <= n3; i++) {
		printf("*");
	}
	puts("");
	printf("%d\t", n4);
	for (int i = 1; i <= n4; i++) {
		printf("*");
	}
	puts("");
	printf("%d\t", n5);
	for (int i = 1; i <= n5; i++) {
		printf("*");
	}
	puts("");

}