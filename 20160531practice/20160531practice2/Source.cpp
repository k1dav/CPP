#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define SIZE 100

struct _sale
{
	char id[20];
	float salary;
	int month[12];
};
typedef struct _sale SALE;

int main(int argv, char *argc[]) {
	SALE sales[5];

	FILE *Ptr = fopen(argc[1], "r");
	if (Ptr == NULL) {
		printf("File Opened Error.\n");
		exit(1);
	}

	char buffer[SIZE];
	int counter = 0;
	while (fgets(buffer, SIZE, Ptr) != NULL) {
		puts(buffer);
		counter++;

		if (counter >= 3) {
			int c = 0;
			char *pch;
			pch = strtok(buffer, "\t");
			while (pch != NULL)
			{
				if (c == 0) {
					strcpy(sales[counter - 3].id, pch);
				}
				else if (c == 1) {
					sales[counter - 3].salary = atof(pch);
				}
				else {
					sales[counter - 3].month[c - 2] = atoi(pch);
				}
				c++;
				pch = strtok(NULL, "\t");
			}
		}
	}
	printf("業務員\t年終業績總和(K)\t年終獎金\t利潤\n");
	float totalprofit = 0;
	for (int i = 1; i <= 5; i++) {
		int total = 0;
		for (int j = 1; j <= 12; j++) {
			total += sales[i - 1].month[j - 1];
		}
		float profit = total - sales[i - 1].salary * 12 - (sales[i - 1].salary * 3 + total*0.3);
		totalprofit += profit;
		printf("%-s\t%-d\t\t%-.4f\t%-.4f\n",sales[i-1].id,total,sales[i-1].salary*3+total*0.3,profit);
	}
	printf("業務部每月業績:\n");
	int monthtotal = 0;
	for (int i = 1; i <= 12; i++) {
		int total = 0;
		for (int j = 1; j <= 5; j++) {
			total += sales[j - 1].month[i - 1];
		}
		printf("%3d月:%5d(k)\n",i,total);
		monthtotal += total;
	}
	printf("業務部年度業績(k):%d\n", monthtotal);
	printf("業務部年度利潤(k):%.3f\n", totalprofit);
}