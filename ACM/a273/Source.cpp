#include<stdio.h>

int main(void) {
	int sum, times;
	while (scanf("%d %d", &sum, &times) != EOF) {
		if (sum == 0) {
			printf("Ok!\n");
		}
		else if (times != 0) {

			if (sum%times == 0) {
				printf("Ok!\n");
			}
			else {
				printf("Impossib1e!\n");
			}
		}
		else {
			printf("Impossib1e!\n");
		}

	}
}