#include<stdio.h>
#include<math.h>

int main(void) {
	int a, b, c, D;
	while (scanf("%d %d %d", &a, &b, &c) != EOF) {
		D = sqrt(b*b - 4 * a*c);
		if (a != 1) {
			c /= a;
			b /= a;
			a /= a;
		}
		if (D > 0) {
			int x1, x2;
			x1 = (-b + D) / 2*a;
			x2 = (-b - D) / 2*a;
			if (x1 > x2) {
				printf("Two different roots x1=%d , x2=%d\n", x1, x2);
			}
			else {
				printf("Two different roots x1=%d , x2=%d\n", x2, x1);
			}
		}
		else if (D == 0) {
			int x;
			x = (-b + D) / 2 * a;
			printf("Two same roots x=%d\n", x);
		}
		else
			printf("No real root\n");
	}
}