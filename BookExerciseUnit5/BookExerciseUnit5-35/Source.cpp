#include<stdio.h>
#include<stdlib.h>

int f(int n) {
	int f1 = 0, f2 = 1, f3;
	if (n == 1) {
		return f1;
	}
	else if (n == 2) {
		return f2;
	}
	else {
		for (int i = 3; i <= n; i++) {
			f3 = f1 + f2;
			f1 = f2;
			f2 = f3;
		}
		return f3;
	}
}

double f_b(void) {
	int f1 = 0, f2 = 1, f3=1;
	while (f3 > 0) {
		f3 = f1 + f2;
		f1 = f2;
		f2 = f3;
	}
	return f1;

}

int main(void) {
	int num;
	printf("Enter the number of Fibonacci :");
	scanf("%d", &num);
	printf("answer is : %d\n", f(num));

	printf("answer is : %lf\n", f_b());
}