#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"header.h"


int main(int argc, char *argv[]) {
	char **input;									//¤Gºû°ÊºA°}¦C
	FILE *inputPtr = open(argv[1], "r");

	int line = counterline(inputPtr);
	rewind(inputPtr);								

	input = (char **)malloc(sizeof(char*)*line);	
	filter(inputPtr, input, line);

	FILE *inPtr = open(argv[2], "r+");
	
	



	fclose(inputPtr);
	free(input);
	system("pause");
}