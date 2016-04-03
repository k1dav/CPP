#include<stdio.h>
#include<stdlib.h>

int main(void) {
	int i = 1;
	while (i <= 3000000) {
		if (i % 1000000 == 0) {
			printf("%d\n", i);
		}
		i++;
	}
}