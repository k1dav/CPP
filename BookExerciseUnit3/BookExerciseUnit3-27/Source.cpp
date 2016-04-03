#include<stdio.h>
#include<stdlib.h>

int main(void) {
	int num, large1 = 0, large2 = 0;
	for (int i = 1; i <= 10; i++) {
		printf("Enter the %d Number:", i);
		scanf("%d", &num);
		if (num > large1) {
			large2 = num;
		}
		if (large2 > large1) {
			int temp = large1;
			large1 = large2;
			large2 = temp;
		}
	}
	printf("the first largest num is %d\n", large1);
	printf("the second largest num is %d\n", large2);
}