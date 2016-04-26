#include<stdio.h>

int main(void) {
	int num[20];
	int c;
	for (int i = 1; i <= 20; i++) {
		printf("²Ä%d­Ó¼Æ¦r\n", i);
		scanf("%d", &num[i - 1]);
		c = 0;
		for (int j = i - 1; j >=1; j--) {
			if (num[j - 1] == num[i - 1]) {
				c++;
			}
		}
		if (c == 0) {
			printf("%d\n", num[i - 1]);
		}
	}
}