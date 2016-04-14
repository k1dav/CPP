#include<stdio.h>

int main(void) {
	int n1,n2,n3,n4,len;
	scanf("%d", &len);
	for (int i = 1; i <= len; i++) {
		while (scanf("%d %d %d %d", &n1, &n2, &n3, &n4) != EOF) {
			if ((n4 - n3) == (n3 - n2)) {
				printf("%d %d %d %d %d\n", n1, n2, n3, n4, n4 + n3 - n2);
			}
			else
				printf("%d %d %d %d %d\n", n1, n2, n3, n4, n4 * n3 / n2);
		}
	}
}