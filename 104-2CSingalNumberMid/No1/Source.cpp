#include<stdio.h>

double Encode(int n);
double EncodeRe(int n);

int main(void) {
	int num;
	printf("請輸入要幾個數字(最多十位)：");
	scanf("%d", &num);
	printf("遞迴方式產生的數字依序為： ");
	for (int i = 1; i <= num; i++) {
		int ans = (int)EncodeRe(i) % 10;
		printf("%d ", ans);
	}
	puts("");
	printf("迴圈方式產生的數字依序為： ");
	for (int i = 1; i <= num; i++) {
		int ans = (int)Encode(i) % 10;
		printf("%d ", ans);
	}
	puts("");
	return 0;
}

double EncodeRe(int n) {
	if (n == 0) {
		return 1;
	}
	else {
		return ((100.0 * (n + 1)) / ((2 * n + 1)*(n + 2)))*EncodeRe(n - 1);
	}
}

double Encode(int n) {
	double sum = 1;
	for (int i = 1; i <= n; i++) {
		sum = sum*((100.0 * (i + 1)) / ((2 * i + 1)*(i + 2)));
	}
	return sum;
}