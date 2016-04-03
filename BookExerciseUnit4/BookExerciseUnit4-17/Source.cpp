#include<stdio.h>
#include<stdlib.h>

int main(void) {
	int account;
	float b_balance, charge, a_balance;
	printf("Account:");
	scanf("%d", &account);
	printf("Credit limit before eco shock:");
	scanf("%f", &b_balance);
	printf("Charge:");
	scanf("%f", &charge);
	a_balance = b_balance / 2;
	printf("Credit limit after eco shock:%.2f\n",a_balance);
	if (charge > a_balance) {
		printf("Your credit exceed!\n");
	}
	else
		printf("Your credit not exceed!\n");

}