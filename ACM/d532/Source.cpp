#include<stdio.h>

int main(void) {
	int y1, y2, counter=0;
	scanf("%d %d", &y1, &y2);
	for (int i = y1; i <= y2; i++) {
		if ((i % 400 == 0) || (i % 100 != 0 && i % 4 == 0)) {
			counter++;
		}
	}
	printf("%d\n", counter);
}