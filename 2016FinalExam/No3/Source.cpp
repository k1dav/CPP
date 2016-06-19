#include<stdio.h>
#include<stdlib.h>
#define SIZE 4

int check_row(int number[SIZE*SIZE][SIZE*SIZE]) {
	for (int r = 0; r < SIZE*SIZE; r++) {		//¦C
		bool check[SIZE*SIZE] = { 0 };					//check°}¦C

		for (int c = 0; c < SIZE*SIZE; c++) {	//¦æ
			if (check[number[r][c] - 1] == 0) {
				check[number[r][c] - 1] = 1;
			}
			else {
				return 1;
			}
		}
	}
	return 0;
}

int check_col(int number[SIZE*SIZE][SIZE*SIZE]) {
	for (int c = 0; c < SIZE*SIZE; c++) {		//¦æ
		bool check[SIZE*SIZE] = { 0 };					//check°}¦C

		for (int r = 0; r < SIZE*SIZE; r++) {	//¦C
			if (check[number[r][c] - 1] == 0) {
				check[number[r][c] - 1] = 1;
			}
			else {
				return 1;
			}
		}
	}
	return 0;
}

int check_block(int number[SIZE*SIZE][SIZE*SIZE]) {
	int real_row = 0;

	while (real_row < SIZE*SIZE) {
		int move_col = 0;
		for (int i = 1; i <= SIZE; i++) {
			bool check[SIZE*SIZE] = { 0 };						//check°}¦C

			for (int j = 0; j < SIZE; j++) {		//¦C

				for (int k = 0; k < SIZE; k++) {	//¦æ
					if (check[number[j + real_row][k + move_col] - 1] == 0) {
						check[number[j + real_row][k + move_col] - 1] = 1;
					}
					else {
						return 1;
					}

				}
			}

			move_col += SIZE;
		}

		real_row += SIZE;
	}
}

int main(int argc, char *argv[]) {
	FILE *fPtr = fopen(argv[1], "r");
	if (fPtr == NULL) {
		printf("Open File Error.\n");
		exit(1);
	}

	int number[SIZE*SIZE][SIZE*SIZE];
	for (int r = 0; r < SIZE*SIZE; r++) {		//¦C
		for (int c = 0; c < SIZE*SIZE; c++) {	//¦æ
			fscanf(fPtr, "%d", &number[r][c]);
		}
	}

	if (check_row(number) == 1) {
		printf("Error in row.\n");
	}
	else if (check_col(number) == 1) {
		printf("Error in column.\n");
	}
	else if (check_block(number) == 1) {
		printf("Error in block.\n");
	}
	else {
		printf("There is no error.\n");
	}

	return 0;
	system("pause");
}
