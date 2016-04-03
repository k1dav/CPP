#include<stdio.h>
#include<stdlib.h>

/*	!(1&&2) = !1 || !2
	!(1||2) = !1 && !2      */


int main(void) {
	int x = 6, y = 7;
	printf("!(x < 5) && !(y >= 7) =  ");
	printf("%d\n", !(x < 5) && !(y >= 7));
	printf("!(x < 5 || y >= 7) =  ");
	printf("%d\n", !(x < 5 || y >= 7));

	puts("");
	int a = 1, b = 1, g = 5;
	printf("!(a == b) || !(g != 5) =  ");
	printf("%d\n", !(a == b) || !(g != 5));
	printf("!(a == b && g != 5) =  ");
	printf("%d\n", !(a == b && g != 5));

	puts("");
	x = 8, y = 5;
	printf("!((x <= 8) && (y > 4)) =  ");
	printf("%d\n", !((x <= 8) && (y > 4)));
	printf("!(x <= 8) || !(y>4) =  ");
	printf("%d\n", !(x <= 8) || !(y>4));

	puts("");
	int i = 3, j = 7;
	printf("!((i > 4) || (j <= 6)) =  ");
	printf("%d\n", !((i > 4) || (j <= 6)));
	printf("!(i > 4) && !(j <= 6) =  ");
	printf("%d\n", !(i > 4) && !(j <= 6));

}