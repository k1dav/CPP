

#include <stdio.h>
#include <stdlib.h>
#include <memory.h>

/**
	用二維的索引存取以線性方式儲存的資料(每一行可有不同長度).
**/
typedef char TableEntry;

typedef struct Table_t {
	TableEntry *entry;
	int rowNum;
	int *lengths;
	int *offsets;
	int size;
} Table;


#define	LOCATION(i, j)	(table->offsets[i] + j)


Table *createTable(int rn, int l[])
{
	Table *table = (Table *)malloc(sizeof(Table));
	table->rowNum = rn;
	table->size = 0;
	table->lengths = l;
	for(int i = 0; i < rn; i++) {
		table->size += table->lengths[i];
	}
	table->entry = (TableEntry *)calloc(table->size, sizeof(TableEntry));

	//預先計算每一行的offset
	table->offsets = (int *)calloc(table->rowNum, sizeof(int));
	table->offsets[0] = 0;
	for(int i = 1; i < table->rowNum; i++) {
		table->offsets[i] = table->offsets[i-1] + table->lengths[i - 1];
	}
	return table;
}
void clearTable(Table *table)
{
	for(int i = 0; i < table->size; i++) table->entry[i] = 0;
}
void setEntry(Table *table, int row, int col, TableEntry entry)
{
	if(row < 0 || row >= table->rowNum || col < 0 || col >= table->lengths[row]) {
		printf("ERROR index (%d, %d)\n", row, col);
		return;
	}
	table->entry[LOCATION(row, col)] = entry;
}
TableEntry getEntry(Table *table, int row, int col)
{
	//printf("%d Length %d\n", row, table->lengths[row]);
	if(row < 0 || row >= table->rowNum || col < 0 || col >= table->lengths[row]) {
		printf("ERROR index (%d, %d)\n", row, col);
		return '\0';
	}
	return table->entry[LOCATION(row, col)];
}
void printTable(Table *table)
{
	for(int i = 0; i < table->rowNum; i++){
		for(int j = 0; j < table->lengths[i]; j++) {
			printf("%c ", getEntry(table,i, j));
		}
		printf("\n");
	}
}
void printTable2(Table *table)
{
	for(int i = 0; i < table->size; i++) {
		printf(" %c", table->entry[i]);
	}
}

void main()
{
	int len[] = { 4, 3, 5 };
	Table *table = createTable(3,len);
	setEntry(table, 0, 0, 'c');
	setEntry(table, 0, 1, 'o');
	setEntry(table, 0, 2, 's');
	setEntry(table, 0, 3, 't');

	setEntry(table, 1, 0, 'a');
	setEntry(table, 1, 1, 'r');
	setEntry(table, 1, 2, 'e');

	setEntry(table, 2, 0, 't');
	setEntry(table, 2, 1, 'a');
	setEntry(table, 2, 2, 's');
	setEntry(table, 2, 3, 't');
	setEntry(table, 2, 4, 'e');
	printTable(table);
	//clearTable(table);
	printTable2(table);
	
}
