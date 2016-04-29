#include<stdio.h>
#include<stdlib.h>

void sequence(int arr[], int times);
void swap(int &n1, int &n2);
void dumparray(int arr[], int times);
void perm(int arr[], int start, int end, int times);
int counter = 0;

int main(void) {
	int num[10] = { 0 };
	int times;
	printf("請輸入數字個數：");
	scanf("%d", &times);
	for (int i = 1; i <= times; i++) {
		printf("請輸入數字:");
		scanf("%d", &num[i - 1]);
	}
	sequence(num, times);
	dumparray(num, times);

	for (int i = 1; i < times; i++) {
		if (i == 1) {
			perm(num, i, times, times);
		}
		else {
			while (num[i - 1] == num[0]) {
				i++;
			}
			perm(num, i, times, times);
		}
	}

}

void sequence(int arr[], int times) {
	for (int i = 1; i <= times; i++) {
		for (int j = i + 1; j <= times; j++) {
			if (arr[i - 1] > arr[j - 1]) {
				swap(arr[i - 1], arr[j - 1]);
			}
		}
	}
}

void swap(int &n1, int &n2) {
	int temp = n1;
	n1 = n2;
	n2 = temp;
}

void dumparray(int arr[], int times) {
	for (int i = 1; i <= times; i++) {
		printf("%3d", arr[i - 1]);
	}
	puts("");
}

void perm(int arr[], int start, int end, int times) {

	if (end == start||start<1) {
		return;
	}
	else {
		perm(arr, start, end - 1, times);
		counter ++;
		if (arr[start - 1] != arr[end - 1]) {
			swap(arr[start - 1], arr[end - 1]);
			dumparray(arr, times);

			if (start == counter ) {
				perm(arr, start , end-1, times);
			}
			else {
				perm(arr, start - 1, end, times);
			}
			
		}
		swap(arr[start - 1], arr[end - 1]);
		counter--;
	}
}