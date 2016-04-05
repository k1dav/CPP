#include<stdio.h>
#include<stdlib.h>

void square(int side,char cha) {
	for (int i = 1; i <= side; i++) {
		for (int j = 1; j <= side; j++) {
			printf("%c",cha);
		}
		puts("");
	}
}

int main(void) {
	int side;
	char s;
	printf("Enter the num of side:");
	scanf("%d", &side);
	printf("Enter the Character you want to fill:");
	scanf("%s", &s);
	square(side,s);
	
}