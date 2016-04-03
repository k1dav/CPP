#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void) {
	int pass, start = 1, end = 1000, guess;
	int counter=0;
	srand(time(NULL));
	pass = rand() % 1000 + 1;
	do {
		printf("請輸入數字(%d~%d),輸入0放棄:",start,end);
		scanf("%d", &guess);
		if (guess == 0) {
			printf("你放棄了!\n");
			break;
		}
		while (guess > end || guess < start) {
			printf("輸入錯誤，請重新輸入數字(%d~%d),輸入0放棄:", start, end);
			scanf("%d", &guess);
			if (guess == 0) {
				break;
			}
		}
		if (guess == 0) {
			printf("你放棄了!\n");
			break;
		}
		if (guess > pass) {
			end = guess;
		}
		else {
			start = guess;
		}
		counter++;
		if (pass == guess) {
			printf("答對了!\n");
		}
	} while (pass != guess);
	printf("你總共猜了%d次\n", counter);
}