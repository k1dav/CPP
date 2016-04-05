#include<stdio.h>
#include<stdlib.h>

int qualitypoints(int a) {
	if (a >= 90 && a <= 100) {
		return 4;
	}
	else if (a >= 80 && a < 90) {
		return 3;
	}
	else if (a >= 70 && a < 80) {
		return 2;
	}
	else if (a >= 60 && a < 70) {
		return 1;
	}
	else {
		return 0;
	}
}

int main(void) {
	int grade;
	printf("Enter the Grade:");
	scanf("%d", &grade);
	printf("Quality is %d\n", qualitypoints(grade));
}