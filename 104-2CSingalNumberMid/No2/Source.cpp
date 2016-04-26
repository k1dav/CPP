#include<stdio.h>
#include<math.h>

int main(void) {
	float n1, n2;
	char op;
	printf("請輸入第一個數\n");
	scanf("%f", &n1);
	printf("請輸入運算符號\n");
	scanf("%s", &op);
	if (op != 'q' && op != 'c') {
		printf("請輸入第二個數\n");
		scanf("%f", &n2);
	}

	switch (op)
	{
	case '+':
		n1 = n1 + n2;
		printf("Ans：%.2f\n", n1);
		break;
	case '-':
		n1 = n1 - n2;
		printf("Ans：%.2f\n", n1);
		break;
	case '*':
		n1 = n1 * n2;
		printf("Ans：%.2f\n", n1);
		break;
	case '/':
		n1 = n1 / n2;
		printf("Ans：%.2f\n", n1);
		break;
	case 's':
		n1 = pow(n1,n2);
		printf("Ans：%.2f\n", n1);
		break;
	case 'q':
		n1 = sqrt(n1);
		printf("Ans：%.2f\n", n1);
		break;
	case 'm':
		n1 = (int)n1 % (int)n2;
		printf("Ans：%.2f\n", n1);
		break;
	case 'c':
		return main();
		break;
	default:
		break;
	}
	while (1) {
		printf("請輸入運算代號或e離開\n");
		scanf("%s", &op);
		if (op == 'e') {
			break;
		}
		if (op != 'q' && op != 'c') {
			printf("請輸入第二個數\n");
			scanf("%f", &n2);
		}

		switch (op)
		{
		case '+':
			n1 = n1 + n2;
			printf("Ans：%.2f\n", n1);
			break;
		case '-':
			n1 = n1 - n2;
			printf("Ans：%.2f\n", n1);
			break;
		case '*':
			n1 = n1 * n2;
			printf("Ans：%.2f\n", n1);
			break;
		case '/':
			n1 = n1 / n2;
			printf("Ans：%.2f\n", n1);
			break;
		case 's':
			n1 = pow(n1, n2);
			printf("Ans：%.2f\n", n1);
			break;
		case 'q':
			n1 = sqrt(n1);
			printf("Ans：%.2f\n", n1);
			break;
		case 'm':
			n1 = (int)n1 % (int)n2;
			printf("Ans：%.2f\n", n1);
			break;
		case 'c':
			return main();
			break;
		default:
			break;
		}

	}
	fflush(stdin);
	return 0;
}