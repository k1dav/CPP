#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define SIZE 20

struct _Stock
{
	char *name;
	int quantity;
	struct _Stock *nextPtr;
};
typedef struct _Stock Stock;
typedef Stock *StockPtr;

void showlist(StockPtr headPtr) {
	while (headPtr != NULL) {
		printf("%-20s%6d\n", headPtr->name, headPtr->quantity);
		headPtr = headPtr->nextPtr;
	}
}

void addlist(StockPtr *headPtr, int quantity, char name[SIZE], int *goods) {
	StockPtr newPtr, currentPtr, prevPtr = NULL;
	newPtr = (StockPtr)malloc(sizeof(Stock));
	newPtr->nextPtr = NULL;
	newPtr->quantity = quantity;
	newPtr->name = (char*)malloc(sizeof(char)*(strlen(name) + 1));
	strcpy(newPtr->name, name);

	if (*headPtr == NULL) {
		*headPtr = newPtr;
		*goods= *goods+1;
	}
	else {
		currentPtr = *headPtr;
		while (currentPtr != NULL &&strcmp(name, currentPtr->name) != 0) {
			prevPtr = currentPtr;
			currentPtr = currentPtr->nextPtr;
		}
		if (currentPtr != NULL) {
			currentPtr->quantity += newPtr->quantity;
		}
		else {
			prevPtr->nextPtr = newPtr;
			*goods = *goods + 1;
		}
	}
}

void dellist(StockPtr *headPtr, int quantity, char name[SIZE], int *goods) {
	StockPtr currentPtr, prevPtr = NULL;
	currentPtr = *headPtr;

	while (currentPtr != NULL &&strcmp(name, currentPtr->name) != 0) {
		prevPtr = currentPtr;
		currentPtr = currentPtr->nextPtr;
	}
	if (currentPtr == NULL) {
		printf("Error goods'name.\n");
	}
	else if (currentPtr->quantity<quantity) {
		printf("Not enough goods to be sold.\n");
	}
	else {
		currentPtr->quantity -= quantity;
		if (currentPtr->quantity == 0) {
			if (prevPtr == NULL) {
				*headPtr = currentPtr->nextPtr;
				*goods = *goods - 1;
			}
			else {
				prevPtr->nextPtr = currentPtr->nextPtr;
				*goods = *goods - 1;
			}
		}
	}
}

void checklist(StockPtr *headPtr, char name[SIZE]) {
	StockPtr currentPtr;
	currentPtr = *headPtr;

	while (currentPtr != NULL &&strcmp(name, currentPtr->name) != 0) {
		currentPtr = currentPtr->nextPtr;
	}
	if (currentPtr == NULL) {
		printf("Goods was sold out or Enter Error.\n");
	}
	else {
		printf("商品名稱              數量\n");
		printf("%-20s%6d\n", currentPtr->name, currentPtr->quantity);
	}
}

void writelist(StockPtr headPtr, const char *dest,int goods) {
	FILE *fPtr = fopen(dest, "w");
	fprintf(fPtr, "%d\n", goods);

	while (headPtr != NULL) {
		fprintf(fPtr,"%d\t%s\n", headPtr->quantity, headPtr->name);
		headPtr = headPtr->nextPtr;
	}

	fclose(fPtr);
}

void menu(int choose, int *goods, StockPtr *headPtr, const char *dest) {
	char name[SIZE];
	int number;
	puts("\n--------------------------");

	switch (choose)
	{
	case 1:
		printf("進貨\n請輸入商品名稱:");
		scanf("%s", name);
		printf("請輸入數量:");
		scanf("%d", &number);
		addlist(headPtr, number, name, goods);
		checklist(headPtr, name);
		break;
	case 2:
		printf("銷貨\n請輸入商品名稱:");
		scanf("%s", name);
		printf("請輸入數量:");
		scanf("%d", &number);
		dellist(headPtr, number, name, goods);
		checklist(headPtr, name);
		break;
	case 3:
		printf("檢查單項存貨\n請輸入商品名稱:");
		scanf("%s", name);
		checklist(headPtr, name);
		break;
	case 4:
		printf("顯示商品所有存貨\n");
		printf("商品總數：%d\n", *goods);
		printf("商品名稱              數量\n");
		showlist(*headPtr);
		break;
	case 5:
		printf("存檔中...\n");
		writelist(*headPtr, dest,*goods);
		printf("存檔完成.\n");
		break;
	case 6:
		printf("存檔中...\n");
		writelist(*headPtr, dest, *goods);
		printf("存檔完成.\n");
		printf("即將離開系統.\n");
		break;
	case 7:
		printf("即將離開系統.\n");
		break;
	default:
		break;
	}

	puts("--------------------------\n");
}

int main(int argc, char *argv[]) {
	StockPtr headPtr = NULL;

	FILE *oPtr = fopen(argv[1], "r");   //開檔(可讀寫)
	if (oPtr == NULL) {
		printf("File opened error.\n");
		exit(1);
	}

	int goodnumber = 0;						//load files
	char buffer[SIZE];
	fscanf(oPtr, "%s",buffer);	//第一行的商品總數
	int quantity;
	while (fscanf(oPtr, "%d\t%s", &quantity, buffer) != EOF) {		//讀到linklist
		addlist(&headPtr, quantity, buffer, &goodnumber);
	}
	fclose(oPtr);

	int choose;					//menu
	do {
		printf("進銷存系統\n\t1.進貨\n\t2.銷貨\n\t3.查詢商品庫存\n\t4.列出所有庫存物品\n\t5.儲存\n\t6.儲存與離開\n\t7.不儲存就離開\n請輸入選項:");
		scanf("%d", &choose);
		while (choose < 1 || choose>7) {
			printf("輸入錯誤，請重新輸入:");
			scanf("%d", &choose);
		}
		menu(choose, &goodnumber, &headPtr,argv[1]);
	} while (!(choose == 6 || choose == 7));

	system("pause");
}