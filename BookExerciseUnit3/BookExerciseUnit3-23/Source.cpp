#include<stdio.h>
#include<stdlib.h>

int main(void) {
	for (int i = 1; i <= 10; i++) {
		printf("%d", i);
		for (int j = 1; j <= 3; j++) {
			printf(" ");
		}
	}
}