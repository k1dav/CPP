#include<stdio.h>
#include<stdlib.h>

int balance(int &money) {
	printf("æl√B¨∞%d\n", money);
	return 0;
}

int in(int &money,int a) {
	money += a;
	balance(money);
	return 0;
}

int out(int &money, int a) {
	if (money >= a) {
		money -= a;
		balance(money);
		return 0;
	}
	else {
		printf("Error,æl√B§£®¨\n");
		balance(money);
		return 0;
	}
}