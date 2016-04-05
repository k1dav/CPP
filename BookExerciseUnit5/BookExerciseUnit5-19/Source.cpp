#include<stdio.h>
#include<stdlib.h>

void square(int side) {
	for (int i = 1; i <= side; i++) {
		for (int j = 1; j <= side; j++) {
			printf("*");
		}
		puts("");
	}
}

int main(void) {
	int side;
	printf("Enter the num of side:");
	scanf("%d", &side);
	square(side);
}