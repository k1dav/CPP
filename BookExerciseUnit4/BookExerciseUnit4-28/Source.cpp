#include<stdio.h>
#include<stdlib.h>

int main(void) {
	int type;
	while (1) {
		printf("請輸入計時類別(-1 to end):1.經理人員 2.計時人員 3.抽佣金工 4.零工 ");
		scanf("%d", &type);
		if (type == -1) {
			break;
		}
		switch (type)
		{
		case 1:
			float salary;
			printf("你為經理人員\n");
			printf("請輸入每週工資:");
			scanf("%f", &salary);
			printf("本週薪資為: %.2f\n", salary);
			puts("");
			break;
		case 2:
			int hours;
			float wage;
			printf("你為計時人員\n");
			printf("請輸入本週上班時數:");
			scanf("%d", &hours);
			printf("請輸入每小時工資:");
			scanf("%f", &wage);
			if (hours > 40) {
				printf("本週薪資為:%.2f\n", wage * 40.0 + wage*1.5*(hours - 40.0));
			}
			else {
				printf("本週薪資為:%.2f\n", wage * 40.0 );
			}
			puts("");
			break;
		case 3:
			float sales;
			printf("你為抽佣金工\n");
			printf("請輸入本週銷售金額:");
			scanf("%f", &sales);
			printf("本週薪資為:%.2f", 250 + sales*0.057);
			puts("");
			break;
		case 4:
			int num;
			float money;
			printf("你為零工\n");
			printf("請輸入本週生產產品個數:");
			scanf("%d", &num);
			printf("請輸入每件工資:");
			scanf("%f", &money);
			printf("本週薪資為:%.2f", num*money);
			puts("");
		default:
			puts("");
			break;
		}
	}

}