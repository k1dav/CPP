#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include"charge.h"

int main(void) {
	float hours;
	int ezcard = 100, visacard = 1000;
	printf("請輸入寄放時間:");
	scanf("%f", &hours);
	printf("費用為 %.2f\n", (float)charge(hours));

	int chose;
	printf("請輸入數字選擇付款方式:1.悠遊卡 2.visa卡 3.現金\n");
	scanf("%d", &chose);


	int charge_1 = charge(hours);
	switch (chose)
	{
	case 1:
		printf("卡片讀取中，金額為%d\n",ezcard);
		printf("扣款中\n");
		ezcard -= charge(hours);
		printf("餘額為 %d 元\n", ezcard);
		break;
	case 2:
		printf("卡片讀取中，金額為%d\n", visacard);
		if (visacard >= charge(hours)) {
			printf("扣款中\n");
			visacard -= charge(hours);
			printf("餘額為 %d 元\n", visacard);
		}
		else {
			printf("餘額不足，扣款失敗\n");
		}
		break;
	case 3:
		int cash;
		printf("請投入零錢\n");
		printf("請輸入金額:");
		scanf("%d", &cash);
		charge_1 -= cash;
		while (charge_1 > 0){
			printf("還需投入%d元\n", charge_1);
			printf("請輸入金額\n");
			scanf("%d", &cash);
			charge_1 -= cash;
		} 
		if (charge_1 < 0) {
			printf("找您%d元\n", -(charge_1));
		}
		break;
	default:
		break;
	}
	printf("謝謝光臨，歡迎下次再來\n");
}