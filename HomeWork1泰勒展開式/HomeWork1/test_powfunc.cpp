#include<stdio.h>
#include<stdlib.h>

float power(float a, float b) {			//计癹伴 a┏计 b计(ぃだ计)
	float c = a;						//c 玂痙セa
	a = 1;								//a1秨﹍笲衡

	if (b >= 0)							//b > 0 计

		for (b; b > 0; b--) {
			a *= c;
		}
	else								//b < 0 计 (计)

		for (b; b < 0; b++) {
			a /= c;
		}
	return a;							//肚a
}

int maint(void) {
	float x, y;
	printf("input a:");
	scanf("%f",&x);
	printf("input b:");
	scanf("%f",&y);
	printf("answer is %.4f", power(x,y));
}