#include<stdio.h>

int main(void) {
	char str1[80];
	char str2[80];
	printf("Please input the string:\n");
	gets_s(str1);
	rewind(stdin);

	int c = 0;
	while (str1[c] != '\0') {
		str2[c] = str1[c];
		c++;
	}
	str2[c] = '\0';
	
	printf("%s\n", str2);
}