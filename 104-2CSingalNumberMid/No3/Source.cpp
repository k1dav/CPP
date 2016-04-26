#include<stdio.h>

double calculate(double money, int expend, double rate);

int main(void) {
	double money = 50000;
	double rate;
	int expend;
	int counter = 0;

	printf("請輸入每個月利率與生活支出\n");
	scanf("%lf %d", &rate, &expend);
	while (rate < 0 || expend < 0) {
		printf("請重新輸入每個月利率與生活支出\n");
		scanf("%f %d", &rate, &expend);
	}
	
	while (money > expend) {
		counter++;
		printf("第%d個月剩：%.2f\n", counter, calculate(money,expend,rate));
		money = calculate(money, expend, rate);
	}
	printf("%d個月生活費將不夠用\n", counter);
}

double calculate(double money,int expend,double rate) {
	double sum = money;
	sum = sum*(1 + rate);
	sum -= expend;
	return sum;
}