#include <stdio.h>
#include <stdlib.h>

//bodyinfo

int main(void)
{
	char name[11], bir[11];
	printf("Enter your English name:");
	scanf("%s", &name);
	printf("Enter your Birthday (YYYY-MM-DD):");
	scanf("%s", &bir);

	float  h, w;
	printf("Hi,%s,Input Your Height (cm):",name);
	scanf("%f", &h);
	printf("Hi,%s,Input Your Weight (Kg):",name);
	scanf("%f", &w);

	printf("So, %s, Your Info is ...\n", name);
	printf("Your name is %s\n", name);
	printf("Your birthday is %s\n", bir);
	printf("Your Height is %.1f\n", h);
	printf("Your Weight is %.1f\n", w);
	printf("Your BMI is %.2f", w / (h*h/10000));

	system("pause");
}