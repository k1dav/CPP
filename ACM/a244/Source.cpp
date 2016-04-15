#include<stdio.h>

int main(void) {
	int times;
	scanf("%d", &times);
	for (int i = 1; i <= times; i++) {
		int choose, n1, n2;
		scanf("%d %d %d", &choose, &n1, &n2);
		unsigned long long int ans = n1*(long long int)n2;
		switch (choose)
		{
		case 1:
			printf("%d\n", n1 + n2);
			break;
		case 2:
			printf("%d\n", n1 - n2);
			break;
		case 3:
			printf("%lld\n", ans);
			break;
		case 4:
			printf("%d\n", n1 / n2);
			break;
		default:
			break;
		}
	}
}