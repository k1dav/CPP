#include<stdio.h>
#include<stdlib.h>

int main(void) {
	int n1, n2, n3;
	printf("請分別輸入國英數成績(用空白區隔):\n");
	scanf("%d %d %d", &n1, &n2, &n3);
	
	int c;
	printf("請選擇接下來動作(輸入數字):1.總分 2.平均 \n3.不及格科目數 4.最高分 5.最低分:\n");
	scanf("%d", &c);

	int n = 0;

	switch (c) 
	{
	case 1: 
		printf("總分為%d\n", n1 + n2 + n3);
		break;
	case 2: 
		printf("平均為%.2f\n", (n1 + n2 + n3) / 3.0);
		break;
	case 3: 
		if (n1 < 60) {
			n++;
		}
		if (n2 < 60) {
			n++;
		}
		if (n3 < 60) {
			n++;
		}
		printf("不及格科目數為%d\n", n);
		break;
	case 4:
		if (n1 > n2 && n1 > n3) {
			printf("最高分為%d\n", n1);
		}
		else if (n2>n1 && n2 > n3) {
			printf("最高分為%d\n", n2);
		}
		else if (n3>n1 && n3 > n2) {
			printf("最高分為%d\n", n3);
		}
		break;
	case 5:
		if (n1 < n2 && n1 < n3) {
			printf("最低分為%d\n", n1);
		}
		else if (n2<n1 && n2 < n3) {
			printf("最低分為%d\n", n2);
		}
		else if (n3<n1 && n3 < n2) {
			printf("最低分為%d\n", n3);
		}
		break;
	default:
		printf("請勿亂輸入\n");
		break;
	}


}