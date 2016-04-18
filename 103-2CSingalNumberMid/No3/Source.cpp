#include<stdio.h>

double power(double r, int n);										//(1+r)^-N
double monthPaymoney(int p, double r, int month);					//r/(1-(1+r)^-N) * p
double moneyPaymonth(int p, int balance, double r, int month);		//P/N+尚未還款本金餘額*r

int main(void) {
	int money, month;
	double rate, sum1, sum2;
	printf("請輸入房貸金額：");
	scanf("%d", &money);
	printf("請輸入分期期數：");
	scanf("%d", &month);
	printf("請輸入月利率：");
	scanf("%lf", &rate);

	puts("");
	puts("=====本息平均償還法=====");
	sum1 = 0;
	printf("本月應繳金額均為：%.3lf\n", monthPaymoney(money, rate, month));
	sum1 = monthPaymoney(money, rate, month)*month;
	printf("到期時還款總額約為：%.3lf元，利息約為%.3lf元\n", sum1, sum1 - money);

	puts("");
	puts("=====本金平均償還法=====");
	int i = 1;
	sum2 = 0;
	int balance = money;
	for (i; i <= month; i++) {
		double pay = moneyPaymonth(money, balance, rate, month);
		printf("第%d期應繳金額為%.3lf元\n", i, pay);
		balance -= money / month;
		sum2 += pay;
	}
	printf("到期時還款總額約為：%.3lf元，利息約為%.3lf元\n", sum2, sum2 - money);
	puts("");

	if (sum1 > sum2) {
		printf("本息平均償還法需付利息較高，所以，採用本金平均償還法較划算！\n");
	}
	else {
		printf("本金平均償還法需付利息較高，所以，採用本息平均償還法較划算！\n");
	}
}

double power(double r, int n) {
	if (n == 0) {
		return 1 ;
	}
	else {
		return (1 / ((1 + r))*power(r, n - 1));
	}
}

double monthPaymoney(int p, double r, int month) {
	return r / (1 - power(r, month))*p;
}

double moneyPaymonth(int p, int balance, double r, int month) {
	return p / month + balance*r;
}
