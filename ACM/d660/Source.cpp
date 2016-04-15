#include<stdio.h>

int main(void) {
	int times;
	scanf("%d", &times);
	for (int i = 1; i <= times; i++) {
		int jumphigh = 0, jumplow = 0;
		int times_1;
		int n1, n2;
		scanf("%d", &times_1);
		for (int j = 1; j <= times_1; j++) {
			scanf("%d", &n2);
			if (j == 1) {
				n1 = n2;
			}
			if (n2 > n1) {
				jumphigh++;
			}
			else if(n2<n1){
				jumplow++;
			}
			n1 = n2;
		}
		printf("Case %d: %d %d\n", i, jumphigh, jumplow);
	}
}