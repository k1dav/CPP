#include<stdio.h>
#include<stdlib.h>

int main(void) {
	int side;
	printf("Enter the side of square:");
	scanf("%d", &side);
	
	for (int i = 1; i <= side; i++) {
		for (int j = 1; j <= side; j++) {
			printf("*");
		}
		puts("");
	}
}