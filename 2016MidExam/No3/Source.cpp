#include<stdio.h>
#include<stdlib.h>

void sequence(int arr[], int times);
void dumparray(int arr[], int times);
void perm(int arr[], int n, int times);
int used[10] = { 0 };
int ans[20] = { 0 };


int main(void) {
	int num[20] = { 0 };
	int times;
	printf("請輸入數字個數：");
	scanf("%d", &times);
	for (int i = 1; i <= times; i++) {
		printf("請輸入數字:");
		scanf("%d", &num[i - 1]);
	}
	sequence(num, times);
	perm(num, 0, times);

}

void sequence(int arr[], int times) {
	for (int i = 1; i <= times; i++) {
		for (int j = i + 1; j <= times; j++) {
			if (arr[i - 1] > arr[j - 1]) {
				int temp = arr[i - 1];
				arr[i - 1] = arr[j - 1];
				arr[j - 1] = temp;
			}
		}
	}
}

void dumparray(int arr[], int times) {
	for (int i = 1; i <= times; i++) {
		printf("%3d", arr[i - 1]);
	}
	puts("");
}

void perm(int arr[], int n, int times) {
	if (n == times) {
		dumparray(ans, times);
		return;
	}
	int last_one = -1;

	for (int i = 1; i <= times; i++) {
		if (used[i - 1] == 0) {
			if (arr[i - 1] != last_one) {
				last_one = arr[i - 1];
				used[i - 1] = 1;
				ans[n] = arr[i - 1];
				perm(arr, n + 1, times);
				used[i - 1] = 0;
			}
		}
	}
}