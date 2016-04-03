#include<stdio.h>
#include<stdlib.h>

int main(void) {
	int num, factor, sum = 0;
	printf("請輸入一個正整數:");
	scanf("%d", &num);
	printf("小於%d的完美數包含:", num);
	for (int i = 1; i <= num; i++) {
		factor = 0;
		for (int j = 1; j < i; j++) {
			if (i%j == 0) {
				factor += j;
			}
		}
		if (factor == i) {
			printf(" %d", i);
			sum += i;
		}

		
	}
	puts("");
	printf("所有完美數的總合為:%d\n", sum);
}