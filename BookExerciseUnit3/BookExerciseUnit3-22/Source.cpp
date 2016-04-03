#include<stdio.h>
#include<stdlib.h>

int main(void) {
	printf("i--\n");
	int i = 10;

	int y = i--;
	printf("%d\n", y);

	puts("");

	printf("--i\n");
	i = 10;
	y = --i;
	printf("%d\n", y);


}