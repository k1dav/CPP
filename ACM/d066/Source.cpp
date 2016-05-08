#include<stdio.h>

int main(void) {
	int hh, mm;
	while (scanf("%d %d", &hh, &mm) != EOF) {
		int total = hh * 60 + mm;
		if (total > 450 && total < 1020) {
			printf("At School\n");
		}
		else {
			printf("Off School\n");
		}
	}
} 