#include <stdio.h>
#include <stdlib.h>

//Â²³æ­pºâ¾÷

int main(void)
{
	int num1, num2,sum;

	printf("input number1:");
	scanf("%d",&num1);

	printf("input number2:");
	scanf("%d",&num2);

	printf("%d+%d=%d\n", num1, num2, num1 + num2);
	printf("%d-%d=%d\n", num1, num2, num1 - num2);
	printf("%d*%d=%d\n", num1, num2, num1 * num2);
	printf("%d/%d=%.2f\n", num1, num2, num1 / (float)num2);
	
	system("pause");
}


