#include<stdio.h>
#include<stdlib.h>
#include"MyCharLib.h"
#include<time.h>



int main(void) {
	char ans,input;
	srand(time(NULL));
	ans = rand() % 26 + 65;
	printf("猜字母 A ~ Z\n");
	
	int counter = 0;

	do{
		puts("請輸入字母，小寫會自動轉大寫:");
		scanf(" %c", &input);
		input = toUpperCase(input);
		fflush(stdin);
		counter++;
	} while (ans != input);

	if (counter < 5) {
		printf("Either you know the secret or you are lucky!\n");
	}
	else if (counter == 5) {
		printf("I guess you know the secret!\n");
	}
	else {
		printf("you should be able to do better!\n");
	}
	return 0;
}