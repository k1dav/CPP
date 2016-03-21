#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int Fibonacci(int a) {
	if (a == 0) {																		//第零項為一
		return  1;	
	}
	else if (a == 1 || a == 2) {														//第一、二項為二
		return  2;		
	}
	else {
		return 2 * Fibonacci(a - 1) + Fibonacci(a - 2) - Fibonacci(a - 3);				//第三項 = 2 * 第二項 + 第一項 - 第零項
	}
}

int main(void) {
	int n = 1;																			//項數
	printf("請輸入費伯納西數列的n值:");						
	scanf("%d", &n);																	//輸入n值

	puts("");
	printf("---------------我叫分隔線---------------\n");
	puts("");

	clock_t start, finish;
	double duration;
	int c = 1000000;																	//執行100萬次 (c)

	printf("即將執行非遞迴費伯納西數列一百萬次\n");								//非遞迴
	start = clock();

	int Fibonacci_0 = 1, Fibonacci_1 = 2, Fibonacci_2 = 2, Fibonacci_3;			//第零項,第一項,第二項,第三項

	while (c--) {

		Fibonacci_0 = 1, Fibonacci_1 = 2, Fibonacci_2 = 2;						//重置 F(0),F(1),F(2)
		if (n == 0) {
			Fibonacci_3 = Fibonacci_0;											//F(0) 輸出 1
		}
		else if (n == 1 || n == 2) {
			Fibonacci_3 = Fibonacci_1;											//F(1),F(2) 輸出 2
		}
		else {
			for (int i = 3; i <= n; i++) {
				Fibonacci_3 = 2 * Fibonacci_2 + Fibonacci_1 - Fibonacci_0;				//F(n)=2*F(n-1)+F(n-2)-F(n-3) n>=3
				Fibonacci_0 = Fibonacci_1;												//F(n-2) -> F(n-3)
				Fibonacci_1 = Fibonacci_2;												//F(n-1) -> F(n-2)
				Fibonacci_2 = Fibonacci_3;												//F(n)   -> F(n-1)
			}
		}
	}

	printf("非遞迴費伯納西數列 F(%d) = %d\n", n, Fibonacci_3);


	finish = clock();
	duration = (double)(finish - start) / CLOCKS_PER_SEC;
	printf("總共花費時間:%.3f seconds\n", duration);								//非遞迴結束

	puts("");
	printf("---------------我叫分隔線---------------\n");
	puts("");

	printf("即將執行遞迴費伯納西數列一百萬次\n");					//遞迴開始

	c = 1000000;													//重設c值

	start = clock();

	while (c--) {
		Fibonacci_3 = Fibonacci(n);
	}

	finish = clock();
	duration = (double)(finish - start) / CLOCKS_PER_SEC;
	printf("遞迴費伯納西數列 F(%d) = %d\n", n, Fibonacci_3);
	printf("總共花費時間:%.3f seconds\n", duration);					//遞迴結束
	puts("");


	system("pause");
}

