#include<stdio.h>
#include<stdlib.h>

float factorial(float a) { // (2n-n)階的fuct. a次數 
	float b = 1;
	a = 2 * a - 2;
	for (a; a > 0; a--) {
		b = b*a;

	}
	return b;
}

float pow(float a, float b) {  //指數迴圈 a底 b指數,不含分數
	float c = a;				//c 保留原本a
	a = 1;				     //a為1開始運算
	if (b >= 0)
		for (b; b > 0; b--) {
			a *= c;
		}
	else
		for (b; b < 0; b++) {
			a /= c;
		}
	return a;
}

float cosxj(float a, float b) {  // a為項數 b為x值
	float sum = 0;		//加總結果為sum，並從0開始加

	for (a; a > 0; a--) {	//for 項數加總

		float s1 = factorial(a);	//s1為階層加總結果
		float a1 = pow(-1, a - 1); //a1為(-1) ^ (j - 1) 結果
		float a2 = pow(b, 2 * a - 2); //a2 為x ^ (2 * j - 2)結果

		sum = sum + a1 * a2 / s1; //cosxj的值
	}
	return sum;				//傳回加總結果回func.
}

int main(void) {
	float a, b;
	printf("input a:");
	scanf("%f", &b);
	printf("input b:");
	scanf("%f", &a);
	printf("answer is %.10f\n", cosxj(a, b));
}
