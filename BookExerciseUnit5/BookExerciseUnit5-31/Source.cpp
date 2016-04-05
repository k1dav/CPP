#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int flip(void) {
	return rand() % 2 ;
}

int main(void) {
	int Heads=0, Tails=0;
	srand(time(NULL));
	for (int i = 1; i <= 100; i++) {
		int result = flip();
		if (result == 1) {
			Heads++;
		}
		else {
			Tails++;
		}
	}
	printf("Heads : %d , Tails : %d\n", Heads, Tails);
}