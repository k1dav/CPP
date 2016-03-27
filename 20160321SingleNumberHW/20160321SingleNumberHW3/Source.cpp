#include<stdio.h>
#include<stdlib.h>

int main() {
	char c1, c2, c3, c4;
	printf("請輸入四個字元(空白分隔):");
	scanf("%c %c %c %c", &c1, &c2, &c3, &c4);
	printf("輸入的四個字元為:%c %c %c %c\n", c1, c2, c3, c4);
	printf("輸入的四個字元的ascii code 為:%d %d %d %d\n", c1, c2, c3, c4);
	c1 -= 20;
	c2 -= 20;
	c3 -= 20;
	c4 -= 20;
	printf("輸入的四個字元加密後的ascii code為:%d %d %d %d\n", c1, c2, c3, c4);
	printf("輸入的四個字元加密後為:%c %c %c %c\n", c1, c2, c3, c4);

}
