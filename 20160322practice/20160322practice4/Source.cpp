#include<stdlib.h>
#include<stdio.h>
#include<time.h>

//終極密碼

int main(void) {
	srand(time(NULL));
	int password = rand() %100 + 1;
	int input = 0;
	int max = 100, min = 0;
	printf("終極密碼\n");

	while (input != password) {
		printf("目前範圍：%d ~ %d\n",min,max);
		printf("請輸入範圍內任一數字:");
		scanf("%d", &input);

		while (input < min || input >max) {
			printf("請重新輸入範圍內數字:");
			scanf("%d", &input);
		}

		if (input > password) {
			max = input;
		}
		else  {
			min = input;
		}
	}

	printf("恭喜你猜中了！\n");
}