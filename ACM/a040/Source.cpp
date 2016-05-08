#include<stdio.h>

//int pow(int n, int m);
//int main(void) {
//	int s, e;
//	int ans[10];
//	
//	while (scanf("%d %d", &s, &e)) {
//		int c = 0;
//		for (int i = s; i <= e; i++) {
//			while (i % 100 == 0) {
//				i++;
//			}
//			int counter = 0;
//			int check = i;
//			int j = 1;
//			for (j; check > 0; j++) {
//				int temp = check % 10;
//				ans[j - 1] = temp;
//				check -= temp;
//				check /= 10;
//			}
//
//			int answer = 0;
//			do {
//				answer = 0;
//				for (int k = 1; k < j; k++) {
//					answer += pow(ans[k - 1], counter);
//				}
//				counter++;
//			} while (answer < i&&counter<10);
//			if (answer == i) {
//				printf("%d ", i);
//				c++;
//			}
//			
//		}
//	
//		if (c == 0) {
//			printf("none");
//		}
//		puts("");
//	}
//	
//}
//
//int pow(int n, int m) {
//	int sum = 1;
//	for (int i = 1; i <= m; i++) {
//		sum *= n;
//	}
//	return sum;
//}

int main(void) {
	int a_num[19] = { 1,2,3,4,5,6,7,8,9,153,370,371,407,1634,8208,9474,54748,92727,93084 };
	int s, e;

	while (scanf("%d %d", &s, &e) != EOF) {
		int counter = 0;
		for (int i = s; i <= e; i++) {
			for (int j = 1; j <= 20; j++) {
				if (i == a_num[j - 1]) {
					printf("%d ", i);
					counter++;
				}
			}
		}
		if (counter == 0) {
			printf("none");
		}
		puts("");
	}
}
