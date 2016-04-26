#include<stdio.h>

void swap(int &x, int &y);
void insectionsort(int a[], int position);

int main(void) {
	int num[10] = {0};
	for (int i = 0; i <= 10; i++) {
		scanf("%d", &num[i]);
		insectionsort(num, i);
		for (int j = 0; j <= i; j++) {
			printf("%d\t", num[j]);
		}
		puts("");
	}
}

void swap(int &x, int &y) {
	int temp = x;
	x = y;
	y = temp;
}

void insectionsort(int a[], int position) {
	for (int i = position - 1; i >= 0; i--) {
		if (a[position] < a[i]) {
			swap(a[position], a[i]);
			position--;
		}
		else
			break;
	}
}
