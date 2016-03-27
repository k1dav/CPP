#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//丟骰子機率

int main(void) {
	int num1 = 0, num2 = 0, num3 = 0, num4 = 0, num5 = 0, num6 = 0, num;
	srand(time(NULL));

	int i;
	printf("請輸入計算次數:");
	scanf("%d", &i);

	for (int j = 1; j <= i; j++) {
		num = rand() % 6 + 1;

		switch (num) {
		case 1:
			num1 ++;
			break;
		case 2:
			num2 ++;
			break;
		case 3:
			num3 ++;
			break;
		case 4:
			num4 ++;
			break;
		case 5:
			num5 ++;
			break;
		case 6:
			num6 ++;
			break;
	}

	}

	printf("出現 1 的機率為 %.3f\n", num1 / (float)i);
	printf("出現 2 的機率為 %.3f\n", num2 / (float)i);
	printf("出現 3 的機率為 %.3f\n", num3 / (float)i);
	printf("出現 4 的機率為 %.3f\n", num4 / (float)i);
	printf("出現 5 的機率為 %.3f\n", num5 / (float)i);
	printf("出現 6 的機率為 %.3f\n", num6 / (float)i);
}