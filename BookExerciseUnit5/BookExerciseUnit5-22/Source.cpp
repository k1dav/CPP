#include<stdio.h>
#include<stdlib.h>

void sp(int a) {
	int b;
	for (int i = 1000000000; i >= 1; i = i / 10) {
		b = a / i;
		if (b != 0) {
			printf("%d  ", b);
			a = a - b*i;
		}
	}
	puts("");
}

int main(void) {
	int num;
	printf("Enter the number:");
	scanf("%d", &num);
	sp(num);
}