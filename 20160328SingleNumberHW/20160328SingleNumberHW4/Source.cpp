#include<stdio.h>
#include<stdlib.h>

int main(void) {
	int a, k, hour, min;
	printf("請輸入大人,小孩數量 (空白隔開)\n");
	scanf("%d %d", &a, &k);
	while (a < 0 || k < 0) {
		printf("輸入錯誤，請重新輸入大人,小孩數量 (空白隔開)\n");
		scanf("%d %d", &a, &k);
	}
	printf("請輸入用餐時段 ex. 18:30\n");
	scanf("%d:%d",&hour,&min);
	while ((hour < 0 || hour >= 24) || (min < 0 || min >= 60)) {
		printf("輸入錯誤，請重新輸入用餐時段 ex. 18:30\n");
		scanf("%d:%d", &hour, &min);
	}
	int check = 60 * hour + min;

	if (check >= 540 && check <= 660) {
		printf("早餐時段,總金額為:%.2f\n", (250.0*a + 250.0*k / 2)*1.1);
	}
	else if (check >= 690 && check <= 870) {
		printf("午餐時段,總金額為:%.2f\n", (450.0*a + 450.0*k / 2)*1.1);
	}
	else if (check >= 1050 && check <= 1290) {
		printf("晚餐時段,總金額為:%.2f\n", (550.0*a + 550.0*k / 2)*1.1);
	}
	else {
		printf("非供餐時段\n");
	}

}