#include<stdio.h>
#include<stdlib.h>

int main(void) {
	int x, y;

	x = 5, y = 8;
	if (y == 8)
		if (x == 5)
			printf("@@@@@\n");
		else
			printf("#####\n");
	printf("$$$$$\n");
	printf("&&&&&\n");

	puts("");

	if (y == 8)
		if (x == 5)
			printf("@@@@@\n");
		else {
			printf("#####\n");
			printf("$$$$$\n");
			printf("&&&&&\n");
		}

	puts("");

	if (y == 8)
		if (x == 5)
			printf("@@@@@\n");
		else {
			printf("#####\n");
			printf("$$$$$\n");
		}
	printf("&&&&&\n");

	puts("");

	x = 5, y = 7;

	if (y == 8) {
		if (x == 5)
			printf("@@@@@\n");
	}
		else
			printf("#####\n");
	printf("$$$$$\n");
	printf("&&&&&\n");

	puts("");
}