#include<stdio.h>
#include<stdlib.h>

int main(void) {
	int money, year;
	float i;
	printf("請輸入本金:\n");
	scanf("%d", &money);
	printf("請輸入年利率(例:0.02):\n");
	scanf("%f", &i);
	printf("請輸入預計存幾年:\n");
	scanf("%d", &year);
	printf("每年利息為%.2f\n", money*i);
	printf("過%d年後本利和為:%.2f\n", year, money + money*i*year);
}