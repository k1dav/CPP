#include<stdio.h>
#include<stdlib.h>

int main(void) {
	int sum=0, num,counter=0;
	while (1) {
		printf("Enter the number(9999 to end):");
		scanf("%d", &num);
		if (num == 9999) {
			break;
		}
		sum += num;
		counter++;
	}
	printf("average is %.2f", sum / (float)counter);
}