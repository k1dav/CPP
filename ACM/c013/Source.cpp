#include<stdio.h>

int main(void) {
	int times, A, F;
	scanf("%d", &times);
	for (int i = 1; i <= times; i++) {
		scanf("%d", &F);
		scanf("%d", &A);
		for (int j = 1; j <= A; j++) {

			for (int k = 1; k <= F - 1; k++) {
				for (int x = 1; x <= k; x++) {
					printf("%d", k);
					
				}puts("");
				
			}
			for (int k = 1; k <= F; k++) {
				printf("%d", F);
			}
			puts("");
			for (int k = F-1; k >=1; k--) {
				for (int x = 1; x <= k; x++) {
					printf("%d", k);
					
				}
				puts("");
			}
			puts("");
		}
	}
}