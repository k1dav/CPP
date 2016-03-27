#include<stdio.h>
#include<stdlib.h>

double factorial(double a) {				 // (2n-n)階的func. a為次數(j)
	double b = 1;
	a = 2 * a - 2;							// a = 2n-2

	for (a; a > 0; a--) {					// b = a!
		b = b*a;
	}
	return b;								//回傳b
}

double power(double a, double b) {			//指數迴圈 a底數 b指數(不含分數)
	double c = a;							//c 保留原本a
	a = 1;									//a為1開始運算

	if (b >= 0)								//b > 0 的指數律
		for (b; b > 0; b--) {
			a *= c;
		}

	else									//b < 0 的指數 (倒數)
		for (b; b < 0; b++) {
			a /= c;
		}
	return a;								//回傳a
}

double cosxj(double a, double b) {			// a為項數 b為x值
	double sum = 0;							//加總結果為sum，初值0

	for (a; a > 0; a--) {					//for	項數加總
		double f = factorial(a);			//f		(2n-2)階答案
		double a1 = power(-1, a - 1);		//a1	(-1) ^ (j - 1) 結果
		double a2 = power(b, 2 * a - 2);	//a2	x ^ (2 * j - 2)結果
		sum = sum + a1 * a2 / f;			//cosxj的結果
	}
	return sum;								//回傳sum
}

double abs(double a, double b) {			//絕對值
	if (a >= b)
		return a - b;
	else
		return b - a;
}

int main(void){

	double x, i;									//x值, -i次方
	double j = 2;									//j項數 ,>=2

	printf("------------------------------------------------------\n");
	printf("|計算 | cosx(j) - cosx(j-1) | < 10 ^ (-i) 的最小 j 值|\n");
	printf("------------------------------------------------------\n");
	printf("------> 請輸入 x 值:");
	scanf("%lf",  &x);
	printf("---->   請輸入 i 值:");					//i為小數點後幾位
	scanf("%lf",  &i);

	while ((float)i != (int)i) {
		printf("i 需為整數，請重新輸入:");
		scanf("%lf", &i);
	}

	double cos2 = cosxj(j, x);						//cos2為後項
	double cos1 = cosxj(j - 1, x);					//cos1為前項
		
	while (abs(cos2, cos1) > power(10, -i)) {		//後項減前項>10^(-1)則執行
		j++;										//因先比較過，所以j先+1
		cos2 = cosxj(j, x);
		cos1 = cosxj(j - 1, x);
	}

	printf("--> | cos%04.2f(%2d) - cos%04.2f(%2d) | = %.9f\n", x, (int)j, x, (int)j - 1, abs(cos2, cos1));
	printf("--> | %10.9f - %10.9f | < 10 ^(%d) 的最小 j 值為 %d\n", cos2, cos1, int(-i), (int)j);
	printf("-->   cos%04.2f(%2d) = %10.9f", x, (int)j, cos2);

	system("pause");
}

