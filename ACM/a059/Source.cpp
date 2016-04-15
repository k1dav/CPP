#include<stdio.h>
#include<math.h>

int main(void) {
	int times;
	scanf("%d", &times);
	for (int i = 1; i <= times; i++) {
		int sum = 0;
		int n1, n2;
		scanf("%d", &n1);
		scanf("%d", &n2);
		int j= sqrt(n1);
		if (j != sqrt(n1)) {
			j = j + 1;
		}
		for (j; j <= sqrt(n2); j++) {
			sum = sum + j*j;
		}
		printf("Case %d: %d\n", i, sum);
	}
}