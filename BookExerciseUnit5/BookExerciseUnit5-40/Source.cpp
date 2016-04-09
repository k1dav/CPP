#include<stdio.h>
#include<stdlib.h>

int main(void) {
	static int count = 1;
	printf("%d\n", count);
	count++;
	for (int i = 1; i <= 10; i++) {
		main();
	}
}