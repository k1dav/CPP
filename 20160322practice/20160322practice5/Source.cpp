#include<stdio.h>
#include<stdlib.h>

//閏年test

int main(void) {
	int year;
	printf("請輸入預測是否為閏年的年份:");
	scanf("%d", &year);

	if (year % 4000 == 0){
		printf("%d不為閏年\n", year);
	}
	else if (year % 400 == 0) {
		printf("%d為閏年\n", year);
	}
	else if (year % 100 == 0) {
		printf("%d不為閏年\n", year);
	}
	else if (year % 4 == 0) {
		printf("%d為閏年\n", year);
	}
	else{
		printf("%d不為閏年\n", year);
	}

}