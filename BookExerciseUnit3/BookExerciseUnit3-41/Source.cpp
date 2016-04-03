#include<stdio.h>
#include<stdlib.h>

int main(void) {
	for (int i = 2; 1; i = i * 2) {
		printf("%d\n", i);
	}
}