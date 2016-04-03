#include<stdio.h>
#include<stdlib.h>

int main(void) {
	int x = 9, y = 11;

	if (x < 10)
		if (y>10)
			printf("*****\n");
		else
			printf("#####\n");
	printf("$$$$$\n");

	puts("");

	x = 11, y = 9;

	if (x < 10)
		if (y>10)
			printf("*****\n");
		else
			printf("#####\n");
	printf("$$$$$\n");

	puts("");

	x = 9, y = 11;

	if (x < 10) {
		if (y>10)
			printf("*****\n");
	}
	else {
		printf("#####\n");
		printf("$$$$$\n");
	}

	puts("");

	x = 11, y = 9;

	if (x < 10) {
		if (y>10)
			printf("*****\n");
	}
	else {
		printf("#####\n");
		printf("$$$$$\n");
	}
	puts("");

}