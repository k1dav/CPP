#include<stdio.h>

int main(void) {
	int num;
	while (scanf("%d", &num) != EOF) {
		for (int i = 1; i < num; i++) {
			if (i % 7 != 0) {
				printf("%d ", i);
			}
		}
		puts("");
	}
}