#include<stdio.h>
#include<math.h>

int main(void) {
	int times;
	scanf("%d", &times);
	for (int i = 0; i <= times; i++) {
		printf("2^%d = %d\n", i, (int)pow(2, i));
	}
}