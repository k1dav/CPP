#include<stdio.h>
#include<stdlib.h>

//§¹¬ü¼Æ

int main(void) {
	int a, b=0,s=0;
	printf("Perfect Number Test\n");
	printf("please input test number:");
	scanf("%d", &a);
	
	int counter=1;
	while (counter < a) {
		if (a % counter == 0) {
			int s1 = counter;
			s += s1;
		}
		counter++;
	}
	if (s == a) {
		printf("It is perfect number!\n");
	}
	else {
		printf("Oops!It isn't perfect number!\n");
	}

}