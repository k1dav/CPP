#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
#include <time.h>
int fibo(int n) {
	if (n == 0) {
		return 1;
	}
	else if (n == 1 || n == 2) {
		return 2;
	}
	else {
		return 2 * fibo(n - 1) + fibo(n - 2) - fibo(n - 3);
	}
}
int main() {
	int n, calc;
	clock_t start, end;
	printf("請輸入一正整數n:");
	scanf_s("%d", &n);
	double s, e;
	start = clock();
	for (int i = 0; i <= 1000000; i++) {
		calc = fibo(n);
	}
	end = clock();
	printf("F(%d)=%d , Time=%f", n, calc, (float)(end - start) / CLK_TCK);
	system("pause");
}