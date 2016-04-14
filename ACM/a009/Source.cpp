#include<stdio.h>
#include<string.h>

int main(void) {
	char str[9999];
	while (scanf("%s", &str) != EOF) {
		int a = strlen(str);
		for (int i = 0; i < a; i++) {
			str[i] -= 7;
		}
		for (int i = 0; i < a; i++) {
			printf("%c", str[i]);
		}
		puts("");
	}
}