#include<stdio.h>
#include<math.h>

int prime(int num);

int main(void) {
	int n1, n2;
	
	while (scanf("%d %d", &n1, &n2) != EOF) {
		int c = 0;
		for (int i = n1; i <= n2; i++) {
			if (i == 1) {
				c--;
			}
			c += prime(i);
		}
		printf("%d\n", c);
	}
}

int prime(int num) {
	int counter = 0;
	for (int i = 2; i <= sqrt(num); i++) {
		if (num%i == 0) {
			return 0;
		}
	}
	return 1;
}
