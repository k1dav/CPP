#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Score_t {
	char name[20];
	int chinese;
	int english;
	int math;
	int sum;
};
typedef struct Score_t Score;

void printall(Score student[500]) {
	for (int i = 0; i < 500; i++) {
		printf("%s\t%d\t%d\t%d\t%d\n", student[i].name, student[i].chinese, student[i].english, student[i].math, student[i].sum);
	}
}

int main(void) {
	FILE* fPtr = NULL;
	fPtr = fopen("scores.txt", "r+");
	if (fPtr == NULL) {
		exit(1);
	}
	Score student[500];
	for (int i = 0; i < 500; i++) {
		char buffer[20];
		fscanf(fPtr, "%s", buffer);
		char *delim = ",";
		char * pch;
		pch = strtok(buffer, delim);
		while (pch != NULL) {
			strcpy(student[i].name, pch);
			pch = strtok(NULL, delim);
			student[i].chinese = *pch;
			pch = strtok(NULL, delim);
			student[i].english = *pch;
			pch = strtok(NULL, delim);
			student[i].math = *pch;
			pch = strtok(NULL, delim);
		}
		student[i].sum = student[i].chinese + student[i].english + student[i].math;
	}
	printf("�m�W\t���\t�^��\t�ƾ�\t�`��\n");
	printall(student);

	printf("�̷Ӱ����ƱƦW\n");
	for (int i = 0; i < 500; i++) {
		for (int j = i; j < 500; j++) {
			if (student[i].chinese < student[j].chinese) {
				Score temp = student[i];
				student[i] = student[j];
				student[j] = temp;
			}
		}
	}
	printall(student);

	printf("�̷ӭ^����ƱƦW\n");
	for (int i = 0; i < 500; i++) {
		for (int j = i; j < 500; j++) {
			if (student[i].english < student[j].english) {
				Score temp = student[i];
				student[i] = student[j];
				student[j] = temp;
			}
		}
	}
	printall(student);

	printf("�̷ӼƾǤ��ƱƦW\n");
	for (int i = 0; i < 500; i++) {
		for (int j = i; j < 500; j++) {
			if (student[i].math < student[j].math) {
				Score temp = student[i];
				student[i] = student[j];
				student[j] = temp;
			}
		}
	}
	printall(student);

	printf("�̷��`���ƦW\n");
	for (int i = 0; i < 500; i++) {
		for (int j = i; j < 500; j++) {
			if (student[i].sum < student[j].sum) {
				Score temp = student[i];
				student[i] = student[j];
				student[j] = temp;
			}
		}
	}
	printall(student);

	system("pause");
}