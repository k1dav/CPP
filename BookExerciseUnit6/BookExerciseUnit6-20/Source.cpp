#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void) {
	int sum;
	int win = 0, lose = 0;
	int a, b, c=0;
	srand(time(NULL));

	for (int i = 1; i <= 1000; i++) {
		a = rand() % 6 + 1;
		b = rand() % 6 + 1;
		c++;
		sum = a + b;

		switch (sum)
		{
		case 7:
		case 11:
			win++;
			break;
		case 2:
		case 3:
		case 12:
			lose++;
			break;
		case 4:
			while (sum != 7) {
				a = rand() % 6 + 1;
				b = rand() % 6 + 1;
				c++;
				sum = a + b;
				if (sum == 4) {
					win++;
					break;
				}
			}
			if (sum != 4) {
				lose++;
			}
			break;
		case 5:
			while (sum != 7) {
				a = rand() % 6 + 1;
				b = rand() % 6 + 1;
				c++;
				sum = a + b;
				if (sum == 5) {
					win++;
					break;
				}
			}
			if (sum != 5) {
				lose++;
			}

			break;
		case 6:
			while (sum != 7) {
				a = rand() % 6 + 1;
				b = rand() % 6 + 1;
				c++;
				sum = a + b;
				if (sum == 6) {
					win++;
					break;
				}
			}
			if (sum != 6) {
				lose++;
			}
			break;
		case 8:
			while (sum != 7) {
				a = rand() % 6 + 1;
				b = rand() % 6 + 1;
				c++;
				sum = a + b;
				if (sum == 8) {
					win++;
					break;
				}
			}
			if (sum != 8) {
				lose++;
			}
			break;
		case 9:
			while (sum != 7) {
				a = rand() % 6 + 1;
				b = rand() % 6 + 1;
				c++;
				sum = a + b;
				if (sum == 9) {
					win++;
					break;
				}
			}
			if (sum != 9) {
				lose++;
			}
			break;
		case 10:
			while (sum != 7) {
				a = rand() % 6 + 1;
				b = rand() % 6 + 1;
				c++;
				sum = a + b;
				if (sum == 10) {
					win++;
					break;
				}
			}
			if (sum != 10) {
				lose++;
			}
			break;
		default:
			break;
		}

	}
	printf("WIN:%d\nLOSE:%d\n", win, lose);
	printf("How long :%.2f", c / 1000.0);

	//一種最普遍的賭博遊戲是稱為“crap”的擲骰子遊戲，這在全世界各地的賭館裡都可看到。這個遊戲的規則很簡單，如下：
	//玩家投擲兩顆骰子。每一顆骰子有六個面，分別刻有1，2，3，4，5，和6個點。
	//當骰子靜止下來後，將兩個骰子朝天的那一面的點數相加起來。如果第一次投擲便擲出7點或11點，
	//那麼判定玩家贏。若第一次擲出2點，3點或12點（這些點數稱為crap），那麼則是玩家輸（即莊家贏）。
	//如果第一次擲出4點，5點，6點，8點，9點或10點，則這個點數成為玩家的目標點數。你必須繼續投擲這兩顆骰子，
	//直到擲出你的目標點數才算贏。但若玩家在達成目標點數之前擲出了7點，則判定玩家輸。
}