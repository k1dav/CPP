#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//丟骰子賭大小

int main(void) {
	int money = 100;

	printf("丟骰子小遊戲\n");
	printf("玩家初始金額為 100 元\n");
	printf("電腦將會擲出三顆骰子\n");
	printf("1 ~ 8 為小,9 ~ 10 為中,11 ~ 18為大\n");
	printf("賠率分別為 2,10,2\n");
	srand(time(NULL));

	while (money > 0) {
		int num = 0;
		num += rand() % 6 + 1;
		num +=rand() % 6 + 1;
		num +=rand() % 6 + 1;

		char g;
		printf("請猜測為小、中、大，請輸入(s/m/b):");
		scanf("%c", &g);

		int pmoney;
		printf("請下賭注:");
		scanf("%d", &pmoney);

		switch (g) {
		case 's':
			if (num >= 1 && num <= 8) {
				printf("你猜對了!\n");
				printf("獲得了%d\n", 2 * pmoney);
				money = pmoney * 2 + money;
				printf("現在金額為%d\n", money);
			}
			else {
				printf("你猜錯了\n");
				money = money - pmoney;
				printf("你輸掉了%d\n", pmoney);
				printf("現在金額為%d\n", money);
			}
			break;
		case 'm':
			if (num ==9 && num ==10) {
				printf("你猜對了!\n");
				printf("獲得了%d\n", 10 * pmoney);
				money = pmoney * 10 + money;
				printf("現在金額為%d\n", money);
			}
			else {
				printf("你猜錯了\n");
				money = money - pmoney;
				printf("你輸掉了%d\n", pmoney);
				printf("現在金額為%d\n", money);
			}
			break;
		case 'b':
			if (num >= 11 && num <= 18) {
				printf("你猜對了!\n");
				printf("獲得了%d\n", 2 * pmoney);
				money = pmoney * 2 + money;
				printf("現在金額為%d\n", money);
			}
			else {
				printf("你猜錯了\n");
				money = money - pmoney;
				printf("你輸掉了%d\n", pmoney);
				printf("現在金額為%d\n", money);
			}
			break;
		default:
			printf("請不要亂猜,電腦將會重新\n");
			break;

		}

	}
	printf("你輸光了！\n");
	printf("小賭怡情，大賭傷身\n");
}