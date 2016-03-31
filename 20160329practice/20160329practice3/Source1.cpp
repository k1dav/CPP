#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int charge(float a) {															//a 是 hours
	int b = ceil(a);															//b 是 a 無條件進位
	if (b <= 12) {													//無懲罰費用
		if (b % 3 == 0) {
			int c = b / 3;
			return c * 15;
		}
		else if (b < 3) {
			return 15;
		}
		else {
			int c = b / 3;
			return c * 15 + (b % 3) * 7;
		}
	}
	else {															//有懲罰費用
		int c = b / 3;
		return c * 15 + (b % 3) * 7 + (b - 12) * 20;
	}
}