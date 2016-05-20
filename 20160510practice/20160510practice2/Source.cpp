#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define SIZE 100


void write(FILE *fPtr, char content[] ) {
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

void read(FILE *fPtr, char str[],int length) {
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

void copy(char soucr[], char destination[]) {
	char content[SIZE];

	FILE *soucefPtr = open(soucr, "rb");
	read(soucefPtr, content, SIZE);
	

	FILE *outputfPtr = open(destination, "wb");
	write(outputfPtr, content);
	printf("%s\n", content);
}

void main(int argc,char *argv[]) {
	if (argc > 1) {
		if (strcmp(argv[1], "copy")==0&& argc>3) {
			copy(argv[2], argv[3]);
			printf("source: %s\n", argv[2]);
			printf("destination: %s\n", argv[3]);
		}
		else {
			printf("Please use %s copy source.txt destination.txt\n", argv[0]);
		}
	}

	
}