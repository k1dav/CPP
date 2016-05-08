#include<stdio.h>
#include<math.h>

int main(void) {
	int num;
	while (scanf("%d", &num) != EOF) {
		int n[9];
		for (int i = 9; i >= 1; i--) {
			n[i - 1] = num % 10;
			num = (num - n[i - 1]) / 10;
		}
		int sum = 0;
		for (int i = 1; i <= 8; i++) {
			sum = sum + n[i - 1] * (9 - i);
		}
		int ans = abs(10 - (sum + n[8]) % 10)%10;


		switch (ans)
		{
		case 0:
			printf("BNZ\n");
			break;
		case 1:
			printf("AMW\n");
			break;
		case 2:
			printf("KLY\n");
			break;
		case 3:
			printf("JVX\n");
			break;
		case 4:
			printf("HU\n");
			break;
		case 5:
			printf("GT\n");
			break;
		case 6:
			printf("FS\n");
			break;
		case 7:
			printf("ER\n");
			break;
		case 8:
			printf("DOQ\n");
			break;
		case 9:
			printf("CIP\n");
			break;
		default:
			break;
		}



	}
}