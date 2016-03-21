#include<stdio.h>
#include<stdlib.h>

int main(void) {
	int g;
	printf("Please input your grade:");
	scanf("%d", &g);

	while (g < 0, g > 100) {
		printf("You input wrong grade!\n");
		printf("Please Re-input your grade:");
		scanf("%d", &g);
	}

	if (g >= 60 && g <= 100) {
		printf("及格\n");
	}
	else if (g >= 50 && g < 60) {
		printf("不及格,需要補考\n");
	}
	else {
		printf("必須重修\n");
	}
}