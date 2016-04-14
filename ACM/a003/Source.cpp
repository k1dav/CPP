#include<stdio.h>

int main(void) {
	int m, d;
	while (scanf("%d %d", &m, &d) != EOF) {
		int s = (m * 2 + d) % 3;
		switch (s)
		{
		case 0:
			printf("´¶³q\n");
			break;
		case 1:
			printf("¦N\n");
			break;
		case 2:
			printf("¤j¦N\n");
			break;
		default:
			break;
		}
	}
}