#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char str[80];

int test(int a) {											//驗證有無重復數字
	int c = 0;
	for (int b = a - 1; b > 0; b--) {
		if (str[a] == str[b]) {								//驗證前幾位				
			c += 1;											//重復則加一
		}
	}
	return c;												//回傳c
}

void Permutations(int n, int m) {							//(n,m)
	if (strlen(str) == m) {
		for (int i = 1; i <= m; i++) {
			printf("%d", str[i]);
		}
	}
	else {
		for (int i = 1; (i <= n) || test(i); str[i]++) {
			str[i] = 1;
			Permutations(n, m);
			
		}
	}
}

int main(void) {
	int n, m;												//定義P(n,m)
	printf("P(n,m)\n");
	printf("Please input n :");
	scanf("%d", &n);
	printf("Please input m :");
	scanf("%d", &m);
	while (n < m || m < 0) {
		printf("You Enter Wrong !\n");
		printf("Please Re-input n :");
		scanf("%d", &n);
		printf("Please Re-input m :");
		scanf("%d", &m);
	}
	printf("--------即將顯示P(n,m)的所有排列-------\n");
	Permutations(n, m);
}

