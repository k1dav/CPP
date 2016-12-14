

#include <stdio.h>
#include <stdlib.h>
#include <memory.h>

/**
	用二維的索引存取以線性方式儲存的資料.
**/
typedef char TableEntry;

typedef struct Table_t {
	TableEntry *entry;
	int rowNum, colNum;
	int *offsets;
} Table;

//#define	LOCATION(row, col)	(row * table->colNum + col)
#define	LOCATION(row, col)	(table->offsets[row] + col)


Table *createTable(int rn, int cn)
{
	Table *table = (Table *)malloc(sizeof(Table));
	table->rowNum = rn;
	table->colNum = cn;
	table->entry = (TableEntry *)malloc(table->rowNum * table->colNum * sizeof(TableEntry));
	table->offsets = (int *)malloc(table->rowNum * sizeof(int));
	for(int i = 0; i < table->rowNum; i++) {
		table->offsets[i] = table->colNum * i;
	}
	return table;
}
void setEntry(Table *table, int row, int col, TableEntry entry)
{
	if(row < 0 || row >= table->rowNum || col < 0 || col >= table->colNum) {
		printf("ERROR index (%d, %d)\n", row, col);
		return;
	}
	table->entry[LOCATION(row, col)] = entry;
}
TableEntry getEntry(Table *table, int row, int col)
{
	if(row < 0 || row >= table->rowNum || col < 0 || col >= table->colNum) {
		printf("ERROR index (%d, %d)\n", row, col);
		return '\0';
	}
	return table->entry[LOCATION(row, col)];
}
void printTable(Table *table)
{
	for(int i = 0; i < table->rowNum; i++){
		for(int j = 0; j < table->colNum; j++) {
			printf("%c ", getEntry(table, i, j));
		}
		printf("\n");
	}
}
void printTable2(Table *table)
{
	for(int i = 0; i < table->rowNum * table->colNum; i++) {
		printf(" %c", table->entry[i]);
	}
}

void main()
{
	//char x[4][3];
	Table *table = createTable(3, 4);
	setEntry(table, 0, 0, 'c');
	setEntry(table, 0, 1, 'o');
	setEntry(table, 0, 2, 's');
	setEntry(table, 0, 3, 't');
	setEntry(table, 1, 0, 'a');
	setEntry(table, 1, 1, 'r');
	setEntry(table, 1, 2, 'e');
	setEntry(table, 1, 3, 'a');
	setEntry(table, 2, 0, 't');
	setEntry(table, 2, 1, 'e');
	setEntry(table, 2, 2, 'a');
	setEntry(table, 2, 3, 'r');
	printTable(table);
	printTable2(table);
}
