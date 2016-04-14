#include<stdio.h>
#include<stdlib.h>

int totalshoot = 0, totalsum = 0;

float rate(int shoot, int total) {
	totalshoot += shoot;
	totalsum += total;
	return shoot / (float)total;
}

int main(void) {
	int s, t,chose=1;
	
	while (chose !=0) {
		printf("投籃命中率與總數:");
		scanf("%d %d", &s, &t);
		while (s > t&&chose!=0) {
			printf("輸入錯誤(輸入0結束):");
			scanf("%d", &chose);
			printf("重新輸入投籃命中率與總數:");
			scanf("%d %d", &s, &t);
		}
		printf("命中率為%.2f\%%(輸入0結束):", rate(s, t) * 100);
		scanf("%d", &chose);
	}
	printf("總命中/投籃數與命中率為:%d/%d %.2f%% \n", totalshoot, totalsum, (totalshoot / (float)totalsum)*100);
}

