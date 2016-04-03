#include<stdio.h>
#include<stdlib.h>

int main(void) {
	int a, b, c, d;
	printf("請輸入a,b,c,d商品購買數量(空白分隔):\n");
	scanf("%d %d %d %d", &a, &b, &c, &d);
	int sum = a * 1000 + b * 1500 + c * 900 + d * 2200;
	printf("你的金額為 %d 元\n", sum);
	if (sum >= 17000) {
		printf("恭喜獲得金獎:機票\n");
	}
	else if (sum >= 14000 && sum < 17000) {
		printf("恭喜獲得金獎:高級按摩椅\n");
	}
	else if (sum >= 12000 && sum < 14000) {
		printf("恭喜獲得金獎:飯店住宿卷\n");
	}
	else if (sum >= 10000 && sum < 12000) {
		printf("恭喜獲得金獎:Lv 包包\n");
	}
	else if (sum >= 8000 && sum < 10000) {
		printf("恭喜獲得銀獎:養氣人蔘雞精\n");
	}
	else if (sum >= 6000 && sum < 8000) {
		printf("恭喜獲得銅獎:美白保養品\n");
	}
	else {
		printf("沒有獲獎!\n");
	}
}