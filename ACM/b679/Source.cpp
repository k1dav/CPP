#include<stdio.h>

int main(void) {
	long long int ans;
	long long int sum;
	while (scanf("%lld", &ans) != EOF) {
		long long int i = 0;
		if (ans >= 36028797153181696) {
			i = 268435456;
		}
		if (ans >= 144115188344291328) {
			i = 536870912;
		}
		if (ans >= 576460752840294400) {
			i = 1073741824;
		}
		if (ans >= 1297036693488009216) {
			i = 1610612736;
		}

		for (i; 1; i++) {
			if (i % 2 == 0) {
				sum = i / 2 * (i + 1);
			}
			else {
				sum = (i + 1) / 2 * i;
			}
			if (ans == sum) {
				printf("%d\n", i);
				break;
			}
		}
	}
}