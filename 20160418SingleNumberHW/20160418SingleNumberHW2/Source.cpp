#include<stdio.h>
#include<stdlib.h>

float average(int c, int e, int m) {
	return (c + e + m) / 3.0;
}

int main(void) {
	int ch, en, ma;
	int choose = 1;
	while (choose != 0) {
		printf("叫块瓣璣计Θ罿:");
		scanf("%d %d %d", &ch, &en, &ma);
		if (average(ch, en, ma) >= 90) {
			printf("だ计㎝单材%.2f/A", average(ch, en, ma));
		}
		else if (average(ch, en, ma) >= 80) {
			printf("だ计㎝单材%.2f/B", average(ch, en, ma));
		}
		else if (average(ch, en, ma) >= 70) {
			printf("だ计㎝单材%.2f/C", average(ch, en, ma));
		}
		else if (average(ch, en, ma) >= 60) {
			printf("だ计㎝单材%.2f/D", average(ch, en, ma));
		}
		else {
			printf("だ计㎝单材%.2f/E", average(ch, en, ma));
		}
		printf("(叫0挡)");
		scanf("%d", &choose);
	}


}