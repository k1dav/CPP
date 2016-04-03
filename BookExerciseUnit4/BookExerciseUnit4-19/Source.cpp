#include<stdio.h>
#include<stdlib.h>

int main(void) {
	float s1 = 2.98, s2 = 4.5, s3 = 9.98, s4 = 4.49, s5 = 6.87;
	int choose, num;
	printf("Enter the item number (1~5):");
	scanf("%d", &choose);
	printf("Enter the number of sales:");
	scanf("%d", &num);

	switch (choose)
	{
	case 1:
		printf("Total is %.2f", num*s1);
		break;
	case 2:
		printf("Total is %.2f", num*s2);
		break;
	case 3:
		printf("Total is %.2f", num*s3);
		break;
	case 4:
		printf("Total is %.2f", num*s4);
		break;
	case 5:
		printf("Total is %.2f", num*s5);
		break;
	default:
		break;
	}
}