#include<stdio.h>
#include<stdlib.h>

int* num;

int test(int a) {											//驗證有無重復數字 a = m
	int c = 0;
	for (int i = 1; i <= a ; i++) {
		for (int j = i + 1; j <= a ; j++) {
			if (num[i] == num[j]) {
				c++;										//重覆則加一
			}
		}
	}
	return c;												//回傳c
}

void Permutations(int n, int m) {							//(n,m)
	do {

		if (test(m) == 0) {									//判斷有無重覆，重覆值非0
			for (int i = 1; i <= m ; i++) {					//從陣列0開始印到m
				printf("%d ", num[i]);
			}
			puts("");										//跳行
		}

		num[m] += 1;										//尾數+1

		for (int j = m ; j >= 0; j--) {						//尾數>n則前項加一，尾數回一
			if (num[j] > n) {
				num[j - 1] += 1;
				num[j] = 1;
			}
		}

	} while (num[0] == 0);									//num[0]為測試是否重覆

}

int main(void) {
	int n, m;												//定義P(n,m)
	printf("P(n,m)\n");
	printf("Please input n :");
	scanf("%d", &n);
	printf("Please input m :");
	scanf("%d", &m);

	while (n < m || m < 0) {								// m <= n ,m>=0
		printf("You Enter Wrong !\n");
		printf("Please Re-input n :");
		scanf("%d", &n);
		printf("Please Re-input m :");
		scanf("%d", &m);
	}
	printf("--------即將顯示P(n,m)的所有排列-------\n");

	num = new int[m];

	for (int i = 1; i <= m; i++) {							//初值設定
		num[i] = i;
	}
	num[0] = 0;												//重覆測試
	Permutations(n, m);

	return 0;
	delete[] num;
}

