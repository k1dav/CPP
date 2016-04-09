#include<stdio.h>

int mystery(int a, int b);

int main(void) {
	int x, y;
	printf("enter two integers:");
	scanf("%d %d", &x, &y);

	printf("the result is %d\n", mystery(x, y));
	return 0;
}

int mystery(int a, int b) {
	if (b >= 1) {
		if (b == 1) {
			return a;
		}
		else
			return a + mystery(a, b - 1);
	}
	else if (b <= -1) {
		if (b == -1) {
			return -a;
		}
		else
			return -a + mystery(a, b + 1);
	}
		
	else if (b == 0) {
		return 0;
	}
		

}