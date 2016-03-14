#include<stdio.h>
#include<stdlib.h>

float factorial(float a) {	 // (2n-n)階的fuct. a次數 
	float b = 1;
	a = 2 * a - 2;			// a = 2n-2
	for (a; a > 0; a--) {	// b = a!
		b = b*a;
	}
	return b;				//回傳b結果
}

float pow(float a, float b) {  //指數迴圈 a底 b指數(不含分數)
	float c = a;				//c 保留原本a
	a = 1;				       //a為1開始運算
	if (b >= 0)					//b > 0 的指數律
		for (b; b > 0; b--) {
			a *= c;
		}
	else						//b < 0 的指數 (倒數)
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

float abs(float a, float b) {	//絕對值
	if (a >= b) 
		return a - b;
	else 
		return b - a;
}

int main(void){
	float x, i; //x值 i為10^(-i)
	float j = 2;//,j為項數

	printf("即將計算cosx後項減前項<10^(-i)的j值\n");
	printf("請輸入泰勒展開式的x值:");
	scanf("%f", &x);
	printf("請輸入泰勒展開式的i值(求到小數點第幾位):");
	scanf("%f", &i);

	do {
		float cos2 = cosxj(j, x);
		float cos1 = cosxj(j - 1, x);
		float abs1 = abs(cos2, cos1);
		float final1 = pow(10, -i);
		if (abs1 < final1) {
			break;
		}
		j++;
	} while (i>0);

	printf("cosx後項減前項<10^(-i)的j值為:%.0f\n", j);	
	printf("cos%d%d (cosxj) 為%f\n", (int)x, (int)j, cosxj(j, x));

	system("pause");
}

