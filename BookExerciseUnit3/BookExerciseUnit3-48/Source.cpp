#include<stdio.h>
#include<stdlib.h>

int main(void) {
	int year, month, day;
	int yeart, montht, dayt;
	int yeard, monthd, dayd;
	printf("Enter your birthday (xxxx.xx.xx):");
	scanf("%d.%d.%d", &year, &month, &day);
	printf("Enter Today's  date (xxxx.xx.xx):");
	scanf("%d.%d.%d", &yeart, &montht, &dayt);
	if (dayt >= day) {
		dayd = dayt - day;
	}
	else {
		dayd = dayt + 30 - day;
		montht--;
	}

	if (montht >= month) {
		monthd = montht - month;
	}
	else {
		monthd = montht + 12 - month;
		yeart--;
	}	

	yeard = yeart - year;
	printf("Your age is %d years %d months %d days\n", yeard, monthd, dayd);
	printf("Your Maximum heart rate is %d\n", 220 - yeard);
	printf("Your Target heart rate is %.0f ~ %.0f\n", (220 - yeard)*0.5, (220 - yeard)*0.85);

}