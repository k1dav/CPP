#include<stdio.h>
#include<stdlib.h>

void honai(int n, char source, char end, char buffer);

int main(void) {
	int number;
	char s, e, b;
	printf("Enter the number of disk:");
	scanf("%d", &number);
	printf("Enter Start Peg:");
	scanf("%s", &s);
	printf("Enter End Peg:");
	scanf("%s", &e);
	printf("Enter Buffer Peg:");
	scanf("%s", &b);
	honai(number, s, e, b);
	return 0;
}

void honai(int n, char source, char end, char buffer) {
	if (n == 1) {
		printf("%c > %c\n", source, end);
		return;
	} 
	else {
		honai(n - 1, source, buffer, end);
		printf("%c > %c\n", source, end);
		honai(n - 1, buffer, end, source);
	}

}