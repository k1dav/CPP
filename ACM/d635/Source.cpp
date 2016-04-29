#include<stdio.h>

int main(void) {
	int oct;
	while (scanf("%d", &oct) != EOF) {
		if (oct < 0) {
			printf("-1\n");
			break;
		}
		printf("%o\n", oct);
	}
}