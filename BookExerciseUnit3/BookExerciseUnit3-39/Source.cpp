#include<stdio.h>
#include<stdlib.h>

int main(void) {
	char num[80];

	int counter = 0;
	printf("Enter the number:");
	scanf("%s", &num);

	for (int i = 0; i <= 80; i++) {
		if (num[i] == '7') {
			counter++;
		}
	}
	printf("7 have %d", counter);
}