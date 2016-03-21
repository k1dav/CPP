#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(void) {
	double cosx2, cosx1;
	double i ;
	double x ;
	printf("Please input x:");
	scanf("%lf", &x);
	printf("Please input i:");
	scanf("%lf", &i);

	int j = 2;
	for (j; j > 0; j++) {			
		double sum2 = 0;
		for (int i = 1; i <= j; i++) {				//cosxj	
			double a = pow(-1, i - 1);
			double b = pow(x, 2 * (i - 1));

			double c1 = 2 * (i - 1);
			double c2 = 1;								
			for (int k = 1; k <= c1; k++) {						//k is (n-2)! the c2 will send the (n-2)! ans
				c2 = c2*k;
			}
			double sum1 = a * b / c2;

			sum2 = sum2 + sum1;
			cosx2 = sum2;

		}
		sum2 = 0;
		for (int i = 1; i <= (j - 1); i++) {		//cosxj-1
			double a = pow(-1, i - 1);				//a = -1^(i-1)
			double b = pow(x, 2 * (i - 1));			//b = x^(2*(i-2))

			double c1 = 2 * (i - 1);
			double c2 = 1;
			for (int k = 1; k <= c1; k++) {
				c2 = c2*k;
			}
			double sum1 = a * b / c2;
			sum2 = sum2 + sum1;								//sum2 is the sigma
			cosx1 = sum2;
		}

		double test1 = fabs(cosx2 - cosx1);					//(cosx2 - cosx1) is absolute value
		double test2 = pow(10, -i);

		if ( test1 < test2 ) {
			break;
		}

	}
	printf("The smallest j is %d\n", j);
	printf("The cosxj is %lf\n", cosx2);

}