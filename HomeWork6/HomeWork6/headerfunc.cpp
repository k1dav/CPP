#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define SIZE 40

int counterline(FILE *Ptr) {						//計算過濾檔行數
	char buffer[SIZE];
	int counter = 0;

	while (fgets(buffer, SIZE, Ptr) != NULL) {			//一次一行，有讀到字則counter+1
		if (strcmp(buffer, "\n") != 0) {				//空白行不算
			counter++;
		}
	}

	return counter;
}

void filter(FILE *Ptr, char **input, int times) {		//讀取過濾檔

	for (int i = 1; i <= times; i++) {					//times為行數

		char buffer[SIZE];
		fgets(buffer, SIZE, Ptr);
		int length = strlen(buffer);					//讀取字串長

		for (int j = 1; j <= length; j++) {
			if (buffer[j - 1] == '\n' || buffer[j - 1] == '\t' || buffer[j - 1] == ' ' || buffer[j - 1] == '\r') {
				buffer[j - 1] = '\0';
				break;
			}
		}

		input[i - 1] = (char*)malloc(sizeof(char)*(length + 1));
		strcpy(input[i - 1], buffer);				
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