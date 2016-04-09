#include<stdio.h>
#include<stdlib.h>

int gcm(int x, int y) {
	if (x%y == 0) {
		return y;
	}
	else {
		gcm(y, x%y);
	}
}

int main(void) {
	int x, y;
	printf("Find the Gcm of x & y:");
	printf("Enter the x y:");
	scanf("%d %d", &x, &y);
	printf("Gcm is : %d\n", gcm(x, y));
}