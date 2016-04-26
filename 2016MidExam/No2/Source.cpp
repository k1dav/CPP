#include<stdio.h>
#include<stdlib.h>

int main(void) {
	int winning_number[7];
	int guessing_number[7];

	for (int i = 1; i <= 7; i++) {
		printf("請輸入開獎號碼 (1~49) ");
		if (i == 7) {
			printf("(特別號):\n");
		}
		else {
			printf(": \n");
		}
		scanf("%d", &winning_number[i - 1]);

		for (int j = i - 1; j >= 0; j--) {
			while ((winning_number[i - 1] == winning_number[j - 1]) || (winning_number[i - 1]>49)) {
				printf("數字輸入錯誤，請重新輸入數字:\n");
				scanf("%d", &winning_number[i - 1]);
			}
		}
	}
	puts("-----------------");
	for (int i = 1; i <= 7; i++) {
		printf("請輸入購買號碼 (1~49) ");
		if (i == 7) {
			printf("(特別號):\n");
		}
		else {
			printf(": \n");
		}
		scanf("%d", &guessing_number[i - 1]);

		for (int j = i - 1; j >= 0; j--) {
			while ((guessing_number[i - 1] == guessing_number[j - 1]) || (guessing_number[i - 1]>49)) {
				printf("數字輸入錯誤，請重新輸入數字:\n");
				scanf("%d", &guessing_number[i - 1]);
			}
		}
	}

	puts("開獎號碼為:");
	for (int i = 1; i <= 7; i++) {
		if (i == 7) {
			printf("  特別號");
		}
		printf("%3d", winning_number[i-1]);
	}
	puts("\n-----------------");
	puts("購買號碼為:");
	for (int i = 1; i <= 7; i++) {
		if (i == 7) {
			printf("  特別號");
		}
		printf("%3d", guessing_number[i - 1]);
	}
	puts("\n-----------------");
	int counter = 0, s_counter = 0;

	for (int i = 1; i <= 6; i++) {
		for (int j = 1; j <= 6; j++) {
			if (winning_number[i - 1] == guessing_number[j - 1]) {
				counter++;
			}
		}
	}

	if (winning_number[6] == guessing_number[6]) {
		s_counter++;
	}

	if (counter == 6) {
		printf("你中了頭獎\n");
	}
	else if (counter == 5 && s_counter == 1) {
		printf("你中了貳獎\n");
	}
	else if (counter == 5 ) {
		printf("你中了參獎\n");
	}
	else if (counter == 4 && s_counter == 1) {
		printf("你中了肆獎\n");
	}
	else if (counter == 4) {
		printf("你中了伍獎\n");
	}
	else if (counter == 3 && s_counter == 1) {
		printf("你中了陸獎，獎金為壹仟元\n");
	}
	else if (counter == 2 && s_counter == 1) {
		printf("你中了柒獎，獎金為肆佰元\n");
	}
	else if (counter == 3 ) {
		printf("你中了捌獎，獎金為肆佰元\n");
	}
	else {
		printf("沒中獎,Poor guys\n");
	}
	system("pause");
	return 0;
}