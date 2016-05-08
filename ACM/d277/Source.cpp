#include<stdio.h>

int main(void) {
	int i;
	while (scanf("%d", &i) != EOF) {
		if (i % 2 == 0) {
			printf("%d\n", i);
		}
		else {
			printf("%d\n", i - 1);
		}
	}
}