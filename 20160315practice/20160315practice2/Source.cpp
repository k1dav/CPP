#include<stdio.h>
#include<stdlib.h>

//計算成績平均

int main(void) {
	int p, s=0; //p人,s分數
	printf("please input number of student of your class:");
	scanf("%d", &p);

	int counter = 1;

	while (counter <= p) {
		int score = 0;
		printf("please input student grade(%d):",counter);
		scanf("%d", &score);
		
		s += score;
		counter++;
	}

	printf("average is %.2f", (float)s / p);
	
}