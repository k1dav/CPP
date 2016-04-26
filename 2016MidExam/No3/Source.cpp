#include<stdio.h>
#include<stdlib.h>

void perm(int start, int end, int arr[], int times);
void sequence(int arr[], int times);
void dumparray(int arr[], int times);
int counter = 0;

int main(void) {
	int t;
	printf("請輸入有幾個數字要做排列:");
	scanf("%d", &t);
	int *num = (int*)malloc(sizeof(int)*t);
	for (int i = 1; i <= t; i++) {
		printf("請輸入第%d個數字:", i);
		scanf("%d", &num[i - 1]);
	}
	sequence(num, t);
	dumparray(num, t);

	for (int i = 1; i <= t; i++) {
		int min = num[0];
		if (i == 1) {
			perm(i, t, num, t);
		}
		else {
			while (num[i - 1] == min&&i<t) {
				i++;
			}
			perm(i, t, num, t);
		}
	}

	free(num);
	return 0;
}

void perm(int start, int end, int arr[], int times) {
	if (end == start) {
		return;
	}
	else {
		perm(start, end - 1, arr, times);
		counter++;
		if (arr[start - 1] != arr[end - 1]) {
			int temp = arr[start - 1];
			arr[start - 1] = arr[end - 1];
			arr[end - 1] = temp;

			if (counter == 1) {
				perm(1, end - 1, arr, times);
			}
			

			dumparray(arr, times);


			temp = arr[start - 1];
			arr[start - 1] = arr[end - 1];
			arr[end - 1] = temp;

		}
		counter--;
	}
}

void sequence(int arr[], int times) {
	for (int i = times; i >= 1; i--) {
		for (int j = i - 1; j >= 0; j--) {
			if (arr[i - 1] < arr[j - 1]) {
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