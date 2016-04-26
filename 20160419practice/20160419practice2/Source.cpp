#include<stdio.h>

int isleap(int year);
int day(int y, int m, int d);
int month[12] = { 31,28,31,30,31,30,31,31,30,31,30,31};

int main(void) {
	int yy, mm, dd;
	printf("請輸入西元年月日：(yyyy/mm/dd)");
	scanf("%d/%d/%d", &yy, &mm, &dd);
	if (isleap(yy) == 1) {
		month[1] = 29;
	}
	printf("%d\n", day(yy, mm, dd) % 7);
}

int isleap(int year) {
	if ((year % 400 == 0) || (year % 100 != 0 && year % 4 == 0)) {
		return 1;
	}
	else
		return 0;
}

int day(int y,int m,int d){
	int total = 0;
	for (int i = 1; i < y; i++) {
		if (isleap(y) == 1) {
			total += 366;
		}
		else {
			total += 365;
		}
	}
	for (int j = 1; j < m; j++) {
		total += month[j-1];
	}
	total += d;
	return total;
}