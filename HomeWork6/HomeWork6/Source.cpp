#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include"Header.h"
#define SIZE 40

int main(int argc, char *argv[]) {
	char **input;									//¤Gºû°ÊºA°}¦C
	FILE *inputPtr = open(argv[1], "r");

	int line = counterline(inputPtr);
	rewind(inputPtr);

	input = (char **)malloc(sizeof(char*)*line);
	filter(inputPtr, input, line);

	FILE *inPtr = open(argv[2], "r+");
	fill(inPtr, input, line);

	printf("Source:%s\n",argv[1]);
	printf("Destination:%s\n",argv[2]);
	printf("Finished.\n");

	fclose(inPtr);
	fclose(inputPtr);
	free(input);
	system("pause");
}