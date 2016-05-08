#include<stdio.h>

int main(void) {
	int seat[10] = { 0 };
	int choose;
	for (int j = 1; j <= 15; j++) {
		printf("Please type 1 for \"first class\"\nPlease type 2 for \"economy\"\n");
		scanf("%d", &choose);
		int i;
		char c;

		switch (choose)
		{
		case 1:
			i = 1;
			for (i; i <= 5; i++) {
				if (seat[i - 1] == 0) {
					seat[i - 1] = 1;
					printf("Seat:%d \nClass:First Class\n",i);
					break;
				}
			}
			if (i == 6) {
				printf("There is no seat in first class.\n");
				printf("Do you want to order the economy(y/n)?\n");
				scanf("%s", &c);
				if (c == 'y') {
					i = 6;
					for (i; i <= 10; i++) {
						if (seat[i - 1] == 0) {
							seat[i - 1] = 1;
							printf("Seat:%d \nClass:Economy Class\n", i);
							break;
						}
					}
				}
				else
					printf("Next flight leaves in 3 hours.\n");
			}
			break;
		case 2:
			i = 6;
			for (i; i <= 10; i++) {
				if (seat[i - 1] == 0) {
					seat[i - 1] = 1;
					printf("Seat:%d \nClass:Economy\n", i);
					break;
				}
			}
			if (i == 11) {
				printf("There is no seat in economy.\n");
				printf("Do you want to order the first class(y/n)?\n");
				scanf("%s", &c);
				if (c == 'y') {
					i = 1;
					for (i; i <= 5; i++) {
						if (seat[i - 1] == 0) {
							seat[i - 1] = 1;
							printf("Seat:%d \nClass:First Class\n", i);
							break;
						}
					}
				}
				else
					printf("Next flight leaves in 3 hours.\n");
			}
			break;
		default:
			break;
		}
	}



}