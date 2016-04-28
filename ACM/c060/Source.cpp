#include<stdio.h>

int main(void) {
	int num[9], counter = 0;
	for (int i = 9; i >= 1; i--) {
		scanf("%d", &num[i - 1]);
	}
	for (int i = 9; i >= 1; i--) {
		if (num[i - 1] == 0 && counter == 0) {
			continue;
		}
		if (num[i - 1] != 0) {
			counter++;
		}
		if (num[i - 1] == 1&&counter==1) {
			printf("x^%d", i - 1);
		}
		if (num[i - 1] > 0) {
			printf("%d^")
		}


	}

}