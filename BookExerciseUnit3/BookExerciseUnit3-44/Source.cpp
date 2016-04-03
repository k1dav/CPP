#include<stdio.h>
#include<stdlib.h>

int main(void) {
	int s1, s2, s3;
	printf("Enter the side of triangle:");
	scanf("%d %d %d", &s1, &s2, &s3);
	if ((s1 + s2 > s3) && (s2 + s3 > s1) && (s3 + s1 > s2)) {
		printf("It is triangle\n");
	}
	else
		printf("It isn't triangle\n");
}