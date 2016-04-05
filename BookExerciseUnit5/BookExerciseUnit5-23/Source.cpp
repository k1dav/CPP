#include<stdio.h>
#include<stdlib.h>

int second(int h,int m,int s) {
	int sum = h * 60 * 60 + m * 60 + s;
	return 12 * 60 * 60 - sum;
}

int main(void) {
	int h, m, s;
	printf("計算與十二點差幾秒 (時:分:秒)(十二小時制):");
	scanf("%d:%d:%d", &h, &m, &s);
	printf("差了%d秒\n", second(h, m, s));
}