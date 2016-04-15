#include<stdio.h>

int main(void) {
	char password[7];
	while (scanf("%s", &password) != EOF) {
		for (int i = 0; i < 6; i++) {
			int p = password[i + 1] - password[i];
			if (p > 0) {
				printf("%d", p);
			}
			else {
				printf("%d", -p);
			}

		}
		puts("");
	}
}