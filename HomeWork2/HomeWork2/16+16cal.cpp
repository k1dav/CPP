#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int hex,hex2; //input char into hex
	printf("Please Enter First Hexadecimal Value 4bytes :");
	scanf("%x",&hex);

	char op;	//input op
	printf("Please chose operator (+,-,*,\/) :");
	scanf("%s",&op);

	printf("Please Enter Second Hexadecimal Value 4bytes :");
	scanf("%x",&hex2);
	
	switch (op)
	{
	case '+' :
		printf("%04x + %04x = %d\n", hex, hex2, hex + hex2);
		break;
	case '-':
		printf("%04x - %04x = %d\n", hex, hex2, hex - hex2);
		break;
	case '*':
		printf("%04x * %04x = %d\n", hex, hex2, hex * hex2);
		break;
	case '/':
		printf("%04x \/ %04x = %.2f\n", hex, hex2, hex / (float)hex2);
		break;
	default:
		printf("You Input Wrong Operator!");
		break;
	}
	system("pause");
	return 0;
}