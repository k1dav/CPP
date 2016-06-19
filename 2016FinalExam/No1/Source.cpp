#include<stdio.h>
#include<stdlib.h>
#include<stdarg.h>
#include<string.h>

void mprintf(char string[1024], ...) {
	va_list ap;
	va_start(ap, string);
	char *pch;

	pch = strtok(string, "#");
	printf("%s", pch);
	while (pch != NULL)
	{
		pch = strtok(NULL, ",");
		va_start(ap, string);
		int times = atoi(pch);
		for (int i = 1; i < times; i++) {
			va_arg(ap, int);
		}
		printf("%d ", va_arg(ap, int));

		pch = strtok(NULL, "#");
	}
	va_end(ap);
}

int main(void) {
	char string[1024], string1[1024];
	char *pch;
	int counter = 0;
	int max = 0;

	printf("Input the char.\nFor exapmle,");
	printf("\nTest 1: #1, #1, #3, #1, #4, #9\nInput:");
	gets_s(string, 1024);
	strcpy(string1, string);
	pch = strtok(string, "#");
	while (pch != NULL)
	{
		pch = strtok(NULL, ",");
		if (atoi(pch) > max) {
			max = atoi(pch);
		}
		pch = strtok(NULL, "#");
	}

	int *arr;
	arr = (int*)malloc(sizeof(int)*max);
	for (int i = 1; i <= max; i++) {
		printf("Please input %d number:", i);
		scanf("%d", &arr[i - 1]);
	}

	if (max == 1) {
		mprintf(string1, arr[0]);
	}
	else if (max == 2) {
		mprintf(string1, arr[0], arr[1]);
	}
	else if (max == 3) {
		mprintf(string1, arr[0], arr[1], arr[2]);
	}
	else if (max == 4) {
		mprintf(string1, arr[0], arr[1], arr[2], arr[3]);
	}
	else if (max == 5) {
		mprintf(string1, arr[0], arr[1], arr[2], arr[3], arr[4]);
	}
	else if (max == 6) {
		mprintf(string1, arr[0], arr[1], arr[2], arr[3], arr[4], arr[5]);
	}
	else if (max == 7) {
		mprintf(string1, arr[0], arr[1], arr[2], arr[3], arr[4], arr[5], arr[6]);
	}
	else if (max == 8) {
		mprintf(string1, arr[0], arr[1], arr[2], arr[3], arr[4], arr[5], arr[6], arr[7]);
	}
	else if (max == 9) {
		mprintf(string1, arr[0], arr[1], arr[2], arr[3], arr[4], arr[5], arr[6], arr[7], arr[8]);
	}
	else if (max == 10) {
		mprintf(string1, arr[0], arr[1], arr[2], arr[3], arr[4], arr[5], arr[6], arr[7], arr[8], arr[9]);
	}

	system("pause");
}