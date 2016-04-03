#include<stdio.h>
#include<stdlib.h>

int main(void) {
	int account;
	float balance, charge, credit, limit;
	while (1) {
		printf("Enter account number (-1 to end):");
		scanf("%d", &account);
		if (account == -1) {
			break;
		}
		printf("Enter beginning balance:");
		scanf("%f", &balance);
		printf("Enter total charges:");
		scanf("%f", &charge);
		printf("Enter total credit:");
		scanf("%f", &credit);
		printf("Enter credit limit:");
		scanf("%f", &limit);
		puts("");

		if ((balance + charge - credit) > limit) {
			puts("");
			printf("Account : %d\n", account);
			printf("Credit limit: %.2f\n", limit);
			printf("Balance: %.2f\n", balance + charge - credit);
			puts("Credit limit Exceeded\n");
		}

	}
}