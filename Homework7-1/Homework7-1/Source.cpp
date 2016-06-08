#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#define SIZE 20

struct _Node
{
	char *words;
	int frequency;
	struct _Node *nextPtr;
};

typedef struct _Node Node;
typedef Node *NodePtr;

void insertlist(NodePtr *headPtr, char buffer[SIZE], int length) {
	NodePtr prevPtr = NULL, currentPtr, newPtr;					
	newPtr = (NodePtr)malloc(sizeof(Node));						//新節點
	newPtr->words = (char*)malloc(sizeof(char)*length);
	newPtr->frequency = 1;
	newPtr->nextPtr = NULL;
	strcpy(newPtr->words, buffer);

	if (*headPtr == NULL) {										//第一次
		*headPtr = newPtr;
	}
	else {
		currentPtr = *headPtr;									//載入linkedlist到currenPtr
		while (currentPtr != NULL&&strcmp(buffer, currentPtr->words) >= 0) {	//若字串<當前字串 
			prevPtr = currentPtr;
			currentPtr = currentPtr->nextPtr;
		}

		if (prevPtr != NULL&&strcmp(buffer, prevPtr->words) == 0) {				//一樣則frequency++
			prevPtr->frequency++;
		}
		else {	

			if (prevPtr == NULL) {												//若是比開頭更小，則變開頭
				newPtr->nextPtr = currentPtr;
				*headPtr = newPtr;
			}
			else {																//若有前一個，則前一個指向新的，新的nextPtr指向下一個
				prevPtr->nextPtr = newPtr;
				newPtr->nextPtr = currentPtr;
			}
		}
	}
}

void displaylist(NodePtr headPtr) {
	while (headPtr != NULL) {
		printf("%-15s(%02d) -> ", headPtr->words, headPtr->frequency);
		headPtr = headPtr->nextPtr;
	}
	printf("NULL\n");
}

int main(int argc, char *argv[]) {
	FILE *oPtr = fopen(argv[1], "r");
	if (oPtr == NULL) {
		printf("Opened File Error.\n");
		exit(1);
	}

	NodePtr headPtr = NULL;
	char buffer[SIZE];
	while (fscanf(oPtr, "%s", buffer) != EOF) {

		int length = strlen(buffer);

		for (int i = 1; i <= length; i++) {
			if (!(isalnum(buffer[i - 1]) || buffer[i - 1] == '\'')) {			//非遇到英數和'則消去

				if (isalnum(buffer[i]) || buffer[i] == '\'') {					//開頭的不全部消去,ex "I"
					for (int j = i; j <= length; j++) {
						buffer[j - 1] = buffer[j];	
					}
				}
				else {
					buffer[i - 1] = '\0';
				}

				length--;													
			}
		}

		length++;
		insertlist(&headPtr, buffer, length);
	}
	displaylist(headPtr);
	fclose(oPtr);
}