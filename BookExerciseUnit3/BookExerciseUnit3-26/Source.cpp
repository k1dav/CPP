#include<stdio.h>
#include<stdlib.h>

int main(void) {
	printf("A\tA+2\tA+4\tA+6\n");
	puts("");

	for (int i = 3; i <= 15; i += 3) {
		printf("%d\t%d\t%d\t%d\n", i, i + 2, i + 4, i + 6);
	}
}