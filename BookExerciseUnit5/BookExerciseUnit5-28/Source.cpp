#include<stdio.h>
#include<stdlib.h>

int reverse(int a){
	int sum = 0;
	for (int i = 10; a>0;) {
		if (a / i > 0) {
			sum = sum + (a%i)/(i / 10);
			sum = sum * 10;
			a = (a - (a%i))/i;
		}
		else if (a < 10) {
			sum = sum + a;
			a = 0;
		}
	}
	return sum;
}

int main(void) {
	int num;
	printf("Enter the number:");
	scanf("%d", &num);
	printf("%d\n", reverse(num));
}