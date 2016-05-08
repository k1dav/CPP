#include<stdio.h>
void sort(int arr[], int times);

int main(void) {
	int num[999999999];
	int counter = 0;
	while (scanf("%d", &num[counter]) != EOF) {
		counter++;

	}
	sort(num, counter);
	int times = counter / 3 + 1;
	for (int i = 1; i <= times; i++) {
		if (num[i * 3 - 1] != num[i * 3 - 2]) {
			printf("%d", num[i * 3 - 2]);
			break;
		}
	}
}

void sort(int arr[], int times) {
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