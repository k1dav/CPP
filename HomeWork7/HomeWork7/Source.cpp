#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define SIZE 40

struct listNode {
	char* word;
	struct listNode *nextPtr;
};
typedef struct listNode ListNode;
typedef ListNode *ListNodePtr;

FILE* open(char fileName[], char type[]) {
	FILE *fPtr = fopen(fileName, type);
	if (fPtr == NULL) {
		printf("The file opened error.\n");
		exit(1);
	}
	return fPtr;
}

/*void displaylist(ListNodePtr headPtr) {
	while (headPtr != NULL) {
		printf("current:%10p , %-10s ,next:%10p\n", headPtr, headPtr->word, headPtr->nextPtr);
		headPtr = headPtr->nextPtr;
	}
	puts("");
	puts("");
}*/

void insertlist(ListNodePtr *headPtr, char buffer[SIZE], int length) {
	ListNodePtr prevPtr, currentPtr, newPtr;

	newPtr = (ListNodePtr)malloc(sizeof(ListNode));			//newPtr資料
	newPtr->word = (char*)malloc(sizeof(char)*length);
	strcpy(newPtr->word, buffer);
	newPtr->nextPtr = NULL;

	if (*headPtr == NULL) {
		*headPtr = newPtr;
	}
	else {
		currentPtr = *headPtr;
		while (currentPtr != NULL) {

			int check = strcmp(currentPtr->word, newPtr->word);
			if (check >0) {
				if (currentPtr == *headPtr) {				//是headPtr
					ListNodePtr tempPtr;
					tempPtr = currentPtr;
					newPtr->nextPtr = tempPtr;
					*headPtr = newPtr;
				}
				else {										//不是headPtr
					prevPtr->nextPtr = newPtr;
					newPtr->nextPtr = currentPtr;
				}
				break;
			}
			
			if (currentPtr->nextPtr == NULL) {
				currentPtr->nextPtr = newPtr;
				break;
			}
			prevPtr = currentPtr;
			currentPtr = currentPtr->nextPtr;
		}
	}
}

void counterword(ListNodePtr headPtr) {
	int counter = 1;
	char buffer[SIZE];
	strcpy(buffer, headPtr->word);
	headPtr = headPtr->nextPtr;
	
	printf("%-20s\t%5s\n", "Words", "Times");
	puts("=============================");

	while (headPtr != NULL) {
		int check = strcmp(buffer, headPtr->word);
		if (check == 0) {
			counter++;
		}
		else {
			printf("%-20s\t%5d\n", buffer, counter);
			counter = 1;
			strcpy(buffer, headPtr->word);
		}

		if (headPtr->nextPtr == NULL) {
			printf("%-20s\t%5d\n", buffer, counter);
		}
		headPtr = headPtr->nextPtr;
	}
}

int main(int argc, char *argv[]) {
	FILE *Ptr = fopen(argv[1], "r+");
	ListNodePtr headPtr = NULL;


	char ch, buffer[SIZE];
	int c = 0;

	fseek(Ptr, 0, SEEK_END);         //修正最後一個單字可能讀不到的bug
	fputc(' ', Ptr);
	fseek(Ptr, 0, SEEK_SET);

	while ((ch = fgetc(Ptr)) != EOF) {
		if ((ch >= 48 && ch <= 57) || (ch >= 65 && ch <= 90) || (ch >= 97 && ch <= 122)) {   //如果是英數就讀到buffer
			buffer[c] = ch;
			c++;
		}
		else {
			buffer[c] = '\0';
			c++;

			if (c != 1) {														//符號不算
				insertlist(&headPtr, buffer, c);
				//displaylist(headPtr);
			}
			c = 0;
		}
	}
	//displaylist(headPtr);
	counterword(headPtr);
	fclose(Ptr);
	system("pause");
}
