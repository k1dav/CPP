#include<stdio.h>

int main(void) {
	int num;
	while (scanf("%d", &num) != EOF) {
		int total = 1 + num*(num*num + 5) / 6;
		printf("%d\n", total);
	}
}
