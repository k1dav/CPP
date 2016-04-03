#include<stdio.h>
#include<stdlib.h>

int main(void) {

	for (int i = 1; i <= 10; i++) {
		for (int j = 1; j <= i; j++) {
			printf("*");
		}
		puts("");
	}

	puts("");

	for (int i = 10; i >= 1; i--) {
		for (int j = i; j >= 1; j--) {
			printf("*");
		}
		puts("");
	}

	puts("");

	for (int i = 10; i >= 1; i--) {
		for (int k = 1; k <= 10-i; k++) {
			printf(" ");
		}
		for (int j = i; j >= 1; j--) {
			printf("*");
		}
		puts("");
	}

	puts("");

	for (int i = 1; i <= 10; i++) {
		for (int k = 10 - i; k >= 1; k--) {
			printf(" ");
		}
		for (int j = 1; j <= i; j++) {
			printf("*");
		}
		puts("");
	}
	puts("");
}