#include<stdio.h>
#include<stdlib.h>

int factorial(int a);
int power(int a,int b);
int fibonacci(int a);

int main(void) {
	int number;
	printf("Please choose which calculator want:\n");
	printf("1.Factorial\n");
	printf("2.Power\n");
	printf("3.Fibonacci\n");
	scanf("%d", &number);

	int input,input1;
	switch (number)
	{
	case 1:
		printf("Input n of factorial:");
		scanf("%d", &input);
		printf("%d!=%d\n", input, factorial(input));
		break;
	case 2:
		printf("Input n^m of Power:\n");
		printf("input n:");
		scanf("%d", &input);
		printf("input m:");
		scanf("%d", &input1);
		printf("%d^%d=%d\n", input,input1, power(input,input1));
		break;
	case 3:
		printf("Input n of fibonacci:");
		scanf("%d", &input);
		printf("F(%d)=%d\n", input, fibonacci(input));
		break;
	default:
		break;
	}
	return 0;
}

int factorial(int a) {
	if (a == 1||a==0) 
		return 1;
	else
		return a*factorial(a - 1);
}

int power(int a,int b) {
	if (a == 0)
		return 0;
	else if (b == 0)
		return 1;
	else if (b == 1)
		return a;
	else
		return a*power(a,b - 1);
}

int fibonacci(int a) {
	if (a == 0)
		return 0;
	else if (a == 1)
		return 1;
	else
		return fibonacci(a - 1) + fibonacci(a - 2);
}