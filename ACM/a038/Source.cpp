#include<stdio.h>

int main(void) {
	int input;
	int ans[31];
	while (scanf("%d", &input) != EOF) {
		int i = 1;
		for (i; input > 0; i++) {
			int temp = input % 10;
			ans[i - 1] = temp;
			input -= temp;
			input /= 10;
		}
		int j = 1;
		while (ans[j - 1] == 0) {
			j++;
		}
		if (j == i) {
			printf("0\n");
		}
		for (j; j < i; j++) {
			printf("%d", ans[j - 1]);
		}
		puts("");
	}
}