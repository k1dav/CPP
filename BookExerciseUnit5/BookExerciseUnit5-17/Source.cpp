#include<stdio.h>
#include<stdlib.h>

void multiple(int a, int b) {
	if (a%b == 0 || b%a == 0) {
		printf("True\n");
	}
	else
		printf("False\n");
}

int main(void) {
		int a, b;
		printf("倍數判斷，請輸入二個數字並用空白隔開:");
		scanf("%d %d", &a, &b);
		multiple(a, b);

}