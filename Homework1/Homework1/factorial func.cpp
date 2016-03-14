#include<stdio.h>
#include<stdlib.h>

int factorial(int a) { // (2n-n)¶¥ªºfuct. a¦¸¼Æ 
	int b = 1;
	a = 2 * a - 2;
	for (a; a > 0; a--) {
		b = b*a;
		printf("%d ", a);
		printf("%d\n", b);
	}
	return b;
}

int main(void) {
	int x;
	printf("test number:");
	scanf("%d", &x);
	printf("%d ", factorial(x));
	printf("%d ", x);

}