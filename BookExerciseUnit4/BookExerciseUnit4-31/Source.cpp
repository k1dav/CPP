#include<stdio.h>
#include<stdlib.h>

int main(void) {
	for (int i = 1; i <= 5; i++) {
		for (int j = 5-i; j >= 1; j--) {
			printf(" ");
		}
		for (int k = 1; k <= 2 * i - 1; k++) {
			printf("*");
		}
		puts("");
	}
	for (int i = 4; i >= 1; i--) {
		for (int j = 5 - i; j >= 1; j--) {
			printf(" ");
		}
		for (int k = 1; k <= 2 * i - 1; k++) {
			printf("*");
		}
		puts("");
	}
}