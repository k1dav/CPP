#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int isleap(int y);
int day(int yy, int mm, int dd);
int yymmdd[20][4];


int main(void) {
	int y1, m1, d1;
	int y2, m2, d2;
	while (scanf("%d %d %d %d %d %d", &y1, &m1, &d1, &y2, &m2, &d2)!=EOF) {
		int ans = abs(day(y1, m1, d1) - day(y2, m2, d2));
		printf("%d\n", ans);
	}
}


int isleap(int y) {
	if ((y % 400 == 0) || (y % 100 != 0 && y % 4 == 0)) {
		return 1;
	}
	else
		return 0;
}

int day(int yy, int mm, int dd) {
	int month[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	int total = 0;
	for (int i = 1; i<yy; i++) {
		if (isleap(i) == 1) {
			total += 366;
		}
		else
			total += 365;
	}
	if (isleap(yy) == 1) {
		month[1] = 29;
	}
	for (int i = 1; i<mm; i++) {
		total += month[i - 1];
	}
	total += dd;
	return total;
}