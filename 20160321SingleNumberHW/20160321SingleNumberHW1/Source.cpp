#include<stdio.h>
#include<stdlib.h>

int main(void) {
	int g1, g2;
	printf("請依序輸入平時成績、期中成績:\n");
	scanf("%d", &g1);
	scanf("%d", &g2);

	int p1, p2, p3;
	printf("請依序輸入平時成績百分比、期中成績百分比、期末成績百分比（例如0.4則輸入40):\n");
	scanf("%d", &p1);
	scanf("%d", &p2);
	scanf("%d", &p3);

	int goal;
	printf("請輸入期望成績:\n");
	scanf("%d", &goal);

	printf("為達%d分，所以您的期末成績必須考%.2f分\n", goal, (goal - g1*p1 / 100 - g2*p2 / 100) / (p3 / 100.0));
}