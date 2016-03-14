#include<stdio.h>
#include<stdlib.h>

float pow(float a,float b) {  //指數迴圈 a底 b指數,不含分數
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

int main(void) {
	float x, y;
	printf("input a:");
	scanf("%f",&x);
	printf("input b:");
	scanf("%f",&y);
	printf("answer is %.4f", pow(x,y));
}