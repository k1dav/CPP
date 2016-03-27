#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<Windows.h>

// 1A2B

int main(void) {
	int num[4];
	char ans[4];

	srand(time(NULL));
	num[0] = rand() % 10;
	do {
		num[1] = rand() % 10;
	} while (num[1] == num[0]);
	do {
		num[2] = rand() % 10;
	} while (num[2] == num[1] || num[2] == num[0]);
	do {
		num[3] = rand() % 10;
	} while (num[3] == num[2] || num[3] == num[1] || num[3] == num[0]);

	printf("1A2B小遊戲\n");
	int counter = 0;
	
	do {

		printf("請輸入四位數字:");
		scanf("%s", &ans);

		for (int i = 0; i <= 3; i++) {
			ans[i] = ans[i] - 48;
		}

		int a = 0, b = 0;
		for (int i = 0; i <= 3; i++) {
			if (ans[i] == num[i]) {
				a++;
			}
		}

		for (int i = 0; i <= 3; i++) {
			for (int j = 0; j <= 3; j++) {
				if (ans[i] == num[j]) {
					b++;
				}
			}
		}

		b = b - a;
		counter++;

		if (a == 4) {
			printf("恭喜答對！\n");
			break;
		}
		else {
			printf("%dA%dB\n", a, b);
		}
		
	} while (counter > 0);

	printf("總共猜了%d次\n", counter);

	char d;
	printf("是否要重新開始遊戲(y/n):");
	scanf("%s", &d);

	if (d == 89 || d == 121) {
		printf("即將重新開始...\n");
		Sleep(1000);
		return main();
	}
	else if (d == 78 || d == 110) {
		printf("本程式即將結束\n");
	}
	else {
		printf("你亂打，程式將結束\n");
	}

}