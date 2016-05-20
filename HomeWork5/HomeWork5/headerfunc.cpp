#include<stdio.h>
#include<stdlib.h>

char hexTchar(int dec, int times) {
	char base16[] = "0123456789ABCDEF";
	if (times == 1) {
		return base16[dec / 16];
	}
	else {
		return base16[dec % 16];
	}
}

char charThex(char first, char last) {
	char base16[] = "0123456789ABCDEF";
	int c = 0;
	int ans;
	while (first != base16[c]) {
		c++;
	}
	ans = c * 16;
	c = 0;
	while (last != base16[c]) {
		c++;
	}
	ans = ans + c;
	return ans;
}

void write(FILE *fPtr, char content[]) {
	for (int index = 0; content[index] != '\0'; index++) {
		fputc(content[index], fPtr);
	}
	fclose(fPtr);
}

FILE* open(char fileName[], char type[]) {
	FILE *fPtr = fopen(fileName, type);
	if (fPtr == NULL) {
		printf("The file opened error.\n");
		exit(1);
	}
	return fPtr;
}

void read(FILE *fPtr, char str[], int length) {
	int data;
	int index = 0;
	while ((data = fgetc(fPtr)) != EOF) {
		str[index] = data;
		index++;
		if (index > length - 1) {
			printf("the length of content is more than array size.\n");
			exit(1);
		}
	}
	str[index] = '\0';
	fclose(fPtr);
}

