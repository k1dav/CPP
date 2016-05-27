#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#define SIZE 40

int counterline(FILE *Ptr) {							//計算過濾檔行數
	char buffer[SIZE];
	int counter = 0;

	while (fgets(buffer, SIZE, Ptr) != NULL) {			//一次一行，有讀到字則counter+1
		counter++;
	}

	return counter;
}

void filter(FILE *Ptr, char **input, int times) {		//讀取過濾檔

	for (int i = 1; i <= times; i++) {					//times為行數

		char buffer[SIZE];
		fgets(buffer, SIZE, Ptr);
		int length = strlen(buffer);					//讀取字串長

		for (int j = 1; j <= length; j++) {
			while (isspace(buffer[j - 1])) {		//處理buffer中不為英數的字
				for (int k = j; k <= length; k++) {
					buffer[k - 1] = buffer[k];
				}
				length--;
			}
		}

		input[i - 1] = (char*)malloc(sizeof(char)*(length + 1));
		strcpy(input[i - 1], buffer);					//buffer轉存input
	}
}

void write(FILE *fPtr, char content[]) {
	for (int index = 0; content[index] != '\0'; index++) {
		fputc(content[index], fPtr);
	}
	fputc('\n', fPtr);
}

FILE* open(char fileName[], char type[]) {
	FILE *fPtr = fopen(fileName, type);
	if (fPtr == NULL) {
		printf("The file opened error.\n");
		exit(1);
	}
	return fPtr;
}

void fill(FILE *Ptr, char ** filter, int times) {
	char ch;
	char buffer[20];
	int counter = 0, c = 0;

	while ((ch = fgetc(Ptr)) != EOF) {
		if (!isspace(ch)) {
			buffer[c] = ch;
			c++;
		}
		else {
			buffer[c] = '\0';
			for (int i = 1; i <= times; i++) {
				if (strcmp(buffer, filter[i - 1]) == 0) {
					fseek(Ptr, counter, SEEK_SET);
					for (int i = 1; i <= c; i++) {
						fputc(' ', Ptr);
					}
				}
			}
			counter += c;									// <---待修
			c = 0;
			buffer[c] = '\0';
		}

	}
}