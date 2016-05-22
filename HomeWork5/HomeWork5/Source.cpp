#include"MYHeader.h"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#define BUFFER 256

void encode(char *input, char *output) {

	int times = strlen(input);											//輸入長度

	int counter = 0;													//output的字元位置

	if (input[times - 1] != '\n') {								//最後一句若無換行符號，需+1(原<times 為了略過換行符號)
		times++;
	}

	for (int i = 1; i < times; i++) {

		if (!((isalnum(input[i - 1])) || (input[i - 1] == '.'))) {	//英文數字點不轉
			output[counter] = '%';
			counter++;
			output[counter] = hexTchar(input[i - 1], 1);
			counter++;
			output[counter] = hexTchar(input[i - 1], 2);
			counter++;
		}
		else {
			output[counter] = input[i - 1];
			counter++;
		}
	}
	output[counter] = '\0';												//字尾補上結束字元
	puts(output);
}

void decode(char *input, char *output) {

	int times = strlen(input);

	int counter = 0;													//output的字元位置

	if (input[times - 1] != '\n') {								//最後一句若無換行符號，需+1(原<times 為了略過換行符號)
		times++;
	}

	for (int i = 1; i < times; i++) {  //<為了略過換行符號

		if ((input[i - 1] == '%') && (isxdigit(input[i])) && (isxdigit(input[i + 1]))) {	//驗證%後是否接二個十六進位，是則轉
			char ans = charThex(input[i], input[i + 1]);
			i += 2;
			output[counter] = ans;
			counter++;
		}
		else {
			output[counter] = input[i - 1];
			counter++;
		}
	}
	output[counter] = '\0';												//字尾補上結束字元
	puts(output);
}

void ec(char source[], char destination[], char argv) {
	char result[1024];
	char input[BUFFER];
	if (argv == 'e') {
		FILE *sourcePtr = open(source, "r");
		FILE *desPtr = open(destination, "w");

		while (fgets(input, BUFFER, sourcePtr) != NULL) {
			encode(input, result);
			write(desPtr, result);
		}

		fclose(sourcePtr);
		fclose(desPtr);
	}
	else {
		FILE *sourcePtr = open(source, "r");
		FILE *desPtr = open(destination, "w");

		while (fgets(input, BUFFER, sourcePtr) != NULL) {
			decode(input, result);
			write(desPtr, result);
		}

		fclose(sourcePtr);
		fclose(desPtr);
	}

}

int main(int argc, char *argv[]) {
	if (argc > 1) {
		if (strcmp(argv[1], "e") == 0 && argc == 4) {
			ec(argv[2], argv[3], 'e');
			printf("source: %s\n", argv[2]);
			printf("destination: %s\n", argv[3]);
		}
		else if (strcmp(argv[1], "d") == 0 && argc == 4) {
			ec(argv[2], argv[3], 'd');
			puts("");
			printf("Source: %s\n", argv[2]);
			printf("Destination: %s\n", argv[3]);
		}
		else {
			printf("Please use %s e source.txt destination.txt\n", argv[0]);
			printf("Please use %s d source.txt destination.txt\n", argv[0]);
		}
	}

	return 0;
	system("pause");
}