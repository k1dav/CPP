#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <memory.h>


typedef struct TableEntry_t {
	char *key;
	int  price;
	struct TableEntry_t *next;
} TableEntry;
typedef struct Table_t {
	TableEntry *entry;	// hash array
	int hashSize;
} Table;
void initialize(TableEntry *entry, char *key, int price) {
	entry->key = key;
	entry->price = price;
	entry->next = NULL;
}
void printEntry(TableEntry *entry) {
	printf("%s %d\n", entry->key, entry->price);
}
int Hash(Table *table, TableEntry entry) {
	unsigned h = 0;
	//char *s = entry.key;
	//while(*s) h += *s++;
	for (char *s = entry.key; *s != '\0'; s++) {
		h += *s; // *s <<= 3;  *s |= 0xf;
	}
	int num = h % table->hashSize;
	printf("%s %d --> %d\n", entry.key, entry.price, num);
	return num;
}
Table *createTable(int size) {
	Table *table = (Table *)malloc(sizeof(Table));
	table->hashSize = size;
	table->entry = (TableEntry *)calloc(table->hashSize, sizeof(TableEntry));
	return table;
}
void insertEntry(Table *table, TableEntry *entry) {

	int probe = Hash(table, *entry);
	printf("probe is %d\n", probe);

	for (int index = 0; index <= table->hashSize / 2; index++) {
		if (!table->entry[probe].key) {
			// empty position found
			printf("insert entry at probe=%d\n", probe);
			table->entry[probe] = *entry;
			return;
		}
		else {
			TableEntry *prev = NULL;
			TableEntry *current = table->entry[probe].next;
			while (current != NULL) {
				if (strcmp(entry->key, table->entry[probe].key)==0) {
					printf("ERROR: cannot insert duplicated entry\n");
					return;
				}
				prev = current;
				current = current->next;
			}
			if (prev == NULL) {
				table->entry[probe].next = entry;
				return;
			}
			else {
				prev->next = entry;
				return;
			}
		}


#ifdef	QUADRATIC_PROBING
		increment += 2;
#endif	QUADRATIC_PROBING
	}
	printf("WARING: hash table is full\n");
}
TableEntry *retrieveEntry(Table *table, TableEntry *entry) {

	int probe = Hash(table, *entry);
	for (int index = 0; index <= table->hashSize / 2; index++) {
		if (!table->entry[probe].key) {
			// empty position found
			return NULL;
		}
		else if (!strcmp(entry->key, table->entry[probe].key)) {
			return &table->entry[probe];
		}
		else {
			TableEntry *current = table->entry[probe].next;
			while (current != NULL) {
				if (strcmp(entry->key, current->key)==0) {
					return current;
				}
				current = current->next;
			}
		}
#ifdef	QUADRATIC_PROBING
		increment += 2;
#endif	QUADRATIC_PROBING
	}
	return NULL;
}
void findTable(Table *table, char *key) {
	TableEntry entry;
	initialize(&entry, key, 0);
	TableEntry *found = retrieveEntry(table, &entry);
	if (!found) {
		printf("%s not found\n", key);
	}
	else printEntry(found);
}
void main() {

	Table *table = createTable(11);
	TableEntry entry[11];
	initialize(&entry[0], "coke", 20);
	insertEntry(table, &entry[0]);
	initialize(&entry[1], "b", 20);
	insertEntry(table, &entry[1]);
	initialize(&entry[2], "bb", 20);
	insertEntry(table, &entry[2]);
	initialize(&entry[3], "bbb", 20);
	insertEntry(table, &entry[3]);
	initialize(&entry[4], "milk tea", 15);
	insertEntry(table, &entry[4]);
	initialize(&entry[5], "apple juice", 30);
	insertEntry(table, &entry[5]);
	initialize(&entry[6], "orange juice", 25);
	insertEntry(table, &entry[6]);
	initialize(&entry[7], "black tea", 10);
	insertEntry(table, &entry[7]);


	findTable(table, "bbb");
	findTable(table, "cok");
	findTable(table, "milk tea");
	findTable(table, "apple juice");
	findTable(table, "black tea");
	findTable(table, "b");

	system("pause");
}
