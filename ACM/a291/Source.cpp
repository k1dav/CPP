#include<stdio.h>

void check(int arr[]);

int main(void) {
	int ans[4];
	int test[4];
	int ans_1[4];
	
	
	while (scanf("%d %d %d %d", &ans[0], &ans[1], &ans[2], &ans[3]) != EOF) {
		int times;
		scanf("%d", &times);
		for (int i = 1; i <= times; i++) {
			scanf("%d %d %d %d", &test[0], &test[1], &test[2], &test[3]);
			int a = 0, b = 0;
			int c = 0;
			for (int i = 1; i <= 4; i++) {
				ans_1[i - 1] = ans[i - 1];
			}
			check(ans_1);
		
			for (int j = 1; j <= 4; j++) {
				for (int k = 1; k <= 4; k++) {
					if (ans[j - 1] == test[k - 1]) {
						if (j == k) {
							a++;
						}
					}

				}
			}
			int t_a = a;
			
			check(test);
			a = 0;
			b = 0;
			for (int j = 1; j <= 4; j++) {
				for (int k = 1; k <= 4; k++) {
					if (ans_1[j - 1] == test[k - 1]) {
						if (j == k) {
							a++;
						}
						else {
							b++;
						}
					}

				}
			}
			printf("%dA%dB\n", t_a, a+b-t_a);
		}
	}
}

void check(int arr[]) {
	for (int i = 0; i <= 9; i++) {
		int counter = 0;
		for (int j = 1; j <= 4; j++) {
			if (arr[j - 1] == i) {
				arr[j - 1] = arr[j - 1] + 10 * counter;
				counter++;
			}
		}
	}
}