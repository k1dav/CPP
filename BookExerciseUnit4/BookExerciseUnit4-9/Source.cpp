#include<stdio.h>
#include<stdlib.h>

int main(void) {
	int num,num1, sum=0;
	printf("幾個數字加總:");
	scanf("%d", &num);
	for (int i = 1; i <= num; i++) {
		printf("數字:");
		scanf("%d", &num1);
		sum += num1;
		printf("sum is %d\n", sum);
	}
}