#include<stdio.h>
#include<stdlib.h>
#define SIZE 3

int check_row(int arr[9][9]) {  //¦C

	for (int i = 1; i <= 9; i++) {
		bool check[10] = { 1,0 };
		for (int j = 1; j <= 9; j++) {
			if (check[arr[i - 1][j - 1]] == 0) {
				check[arr[i - 1][j - 1]] = 1;
			}
			else {
				return 1;
			}
		}
	}
	return 0;
}

int check_col(int arr[9][9]) {  //¦æ

	for (int i = 1; i <= 9; i++) {
		bool check[10] = { 1,0 };
		for (int j = 1; j <= 9; j++) {
			if (check[arr[j - 1][i - 1]] == 0) {
				check[arr[j - 1][i - 1]] = 1;
			}
			else {
				return 1;
			}
		}
	}
	return 0;
}

int check_block(int arr[9][9]) {
	int counter_row = 1;
	int counter_col = 1;
	int c = 0;

	while (counter_row <= 9) {
		bool check[10] = { 1,0 };
		for (int i = 0; i < 9; i++) {
			for (int j = 1; j <= 3; j++) {
				int k = i % 3;
				if (check[arr[k + counter_row - 1][j + counter_col - 2]] == 0) {
					check[arr[k + counter_row - 1][j + counter_col - 2]] = 1;
				}
				else {
					printf("%d %d Error", i + counter_row , j + counter_col - 1);
					return 1;
				}

			}
			c++;
			if (c == 3) {
				counter_col += 3;
				c = 0;
				check[0] = 1;
				for (int l = 1; l <= 9; l++) {
					check[l] = 0;
				}
			}
		}
		counter_row += 3;
		counter_col = 1;
	}
	return 0;
}

int main(int argc, char* argv[]) {
	FILE *oPtr = fopen(argv[1], "r");
	if (oPtr == NULL) {
		printf("File Opened Error.\n");
		exit(1);
	}

	int num[9][9] = { 0 };
	for (int i = 1; i <= 9; i++) {
		for (int j = 1; j <= 9; j++) {
			fscanf(oPtr, "%d", &num[i - 1][j - 1]);
		}
	}
	if (check_row(num) == 1) {
		printf("Error in row.\n");
		exit(1);
	}
	else if (check_col(num) == 1) {
		printf("Error in column.\n");
		exit(1);
	}
	else if (check_block(num) == 1) {
		printf("Error in block.\n");
		exit(1);
	}
	else {
		puts("No Error!");
	}

}