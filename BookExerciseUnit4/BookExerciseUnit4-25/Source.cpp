#include<stdio.h>
#include<stdlib.h>

int main(void) {
	printf("10\t2\t\t8\t16\n");
	int two[9];

	for (int i = 1; i <= 9; i++) {
		two[i] = 0;
	}

	for (int i = 1; i <= 256; i++) {
		printf("%d\t", i);
		two[9] += 1;										
		for (int j = 9; j >= 0; j--) {						
			if (two[j] > 1) {
				two[j - 1] += 1;
				two[j] = 0;
			}
		}
		for (int j = 1; j <= 9; j++) {
			printf("%d", two[j]);
		}
		printf("\t");
		printf("%o\t", i);
		printf("%X\t", i);
		puts("");
	}
	return 0;
}