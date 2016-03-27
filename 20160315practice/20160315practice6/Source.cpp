#include<stdlib.h>
#include<stdio.h>
#include<time.h>

//猜拳小遊戲

int main(void) {
	int p;
	int c=0;
	srand(time(NULL));

	printf("猜拳小遊戲\n");

	while (c <= 3) {
		
		int cp = rand() % 3 + 1;

		
		printf("請輸入 0(石頭),1(布),2(剪刀):");
		scanf("%d", &p);
		
		switch (p) {
		case 0:
			if (cp == 2) {
				printf("你贏了%d次\n", c);
				printf("贏三次後跳出遊戲\n");
				c++;
			}
			else if (cp == 1) {
				printf("你輸了，還需要贏%d次才行\n", 3-c);
			}
			else {
				printf("平手！還需要贏%d次才行\n", 3-c);
			}
			break;
		case 1:
			if (cp == 0) {
				printf("你贏了%d次\n", c);
				printf("贏三次後跳出遊戲\n");
				c++;
			}
			else if (cp == 2) {
				printf("你輸了，還需要贏%d次才行\n", 3-c);
			}
			else {
				printf("平手！還需要贏%d次才行\n", 3-c);
			}
			break;
		case 2:
			if (cp == 1) {
				printf("你贏了%d次\n", c);
				printf("贏三次後跳出遊戲\n");
				c++;
			}
			else if (cp == 0) {
				printf("你輸了，還需要贏%d次才行\n", 3-c);
			}
			else {
				printf("平手！還需要贏%d次才行\n", 3-c);
			}
			break;
		}
	}
}