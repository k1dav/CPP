#include<stdio.h>
#include<stdlib.h>
#include"bank.h"

int main(void) {
	int input, a, t = 1;
	int money = 10000;
	while (t) {
		balance;
		printf("請輸入數字, 1.存款 , 2.取款 , 3.觀看餘額 4.離開\n");
		scanf("%d", &input);

		if (input == 1 || input == 2) {
			printf("請輸入金額:");
			scanf("%d", &a);
		}

		switch (input)
		{
		case 1: 
			in(money,a);
			break;
		case 2:
			out(money,a);
			break;
		case 3:
			balance(money);
			break;
		case 4:
			t = 0;
			break;
		default:
			printf("Errorrrrrr\n");
			break;
		}


	}

}
