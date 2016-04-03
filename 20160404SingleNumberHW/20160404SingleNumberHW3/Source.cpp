#include<stdio.h>
#include<stdlib.h>

int main(void) {
	int x, y, factor=0;
	printf("叫块タ俱计盢т程そ计 (ノフ筳秨):");
	scanf("%d %d", &x, &y);
	if (x > y) {
		for (int i = y; i >= 1; i--) {
			if ((x % i == 0) && (y % i == 0)) {
				factor = i;
				if (factor != 0) {
					break;
				}
			}
		}
	}
	else {
		for (int i = x; i >= 1; i--) {
			if ((x % i == 0) && (y % i == 0)) {
				factor = i;
				if (factor != 0) {
					break;
				}
			}
		}
	}
	printf("程そ计:%d\n", factor);
	char yn;
	printf("块y穝磅︽:");
	scanf("%s", &yn);

	if (yn == 'y') {
		return main();
	}

}