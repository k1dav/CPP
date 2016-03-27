#include<stdio.h>
#include<stdlib.h>

float factorial(float a) {					 // (2n-n)階的func. a為次數(j)
	float b = 1;
	a = 2 * a - 2;							// a = 2n-2

	for (a; a > 0; a--) {					// b = a!
		b = b*a;
	}
	return b;								//回傳b
}

float power(float a, float b) {			//指數迴圈 a底數 b指數(不含分數)
	float c = a;						//c 保留原本a
	a = 1;								//a為1開始運算

	if (b >= 0)							//b > 0 的指數律

		for (b; b > 0; b--) {
			a *= c;
		}
	else								//b < 0 的指數 (倒數)

		for (b; b < 0; b++) {
			a /= c;
		}
	return a;							//回傳a
}

float cosxj(float a, float b) {			// a為項數 b為x值
	float sum = 0;						//加總結果為sum，初值0

	for (a; a > 0; a--) {				//for	項數加總
		float f = factorial(a);			//f		(2n-2)階答案
		float a1 = power(-1, a - 1);	//a1	(-1) ^ (j - 1) 結果
		float a2 = power(b, 2 * a - 2);	//a2	x ^ (2 * j - 2)結果

		sum = sum + a1 * a2 / f;		//cosxj的結果
	}
	return sum;							//回傳sum
}

int main(void) {
	float a, b;
	printf("input a:");
	scanf("%f", &a);
	printf("input b:");
	scanf("%f", &b);
	printf("answer is %.10f\n", cosxj(a, b));
}
