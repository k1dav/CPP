#include<stdio.h>
#include<stdlib.h>

int main(void) {
	printf("十進位\t羅馬符號\n");
	for (int i = 1; i <= 100; i++) {
		int j = i;
		printf("%d\t", i);
		while (j > 0) {
			while (j == 100) {
				printf("C");
				j = j -100;
			}
			while (j >= 90) {
				printf("XC");
				j = j - 90;
			}
			while (j >= 50) {
				printf("L");
				j = j - 50;
			}
			while (j >= 40) {
				printf("XL");
				j = j - 40;
			}
			while (j >= 10) {
				printf("X");
				j = j - 10;
			}
			while (j >= 9) {
				printf("IX");
				j = j - 9;
			}
			while (j >= 5) {
				printf("V");
				j = j - 5;
			}
			while (j >= 4) {
				printf("IV");
				j = j - 4;
			}
			while (j >= 1) {
				printf("I");
				j = j - 1;
			}
			puts("");
		}

	}
}