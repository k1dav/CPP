#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void) {
	srand(time(NULL));
	int mynum = rand() % 1000 + 1;
	int guess;
	printf("I have a number between 1 and 1000\n");
	printf("Can you guess my number?\n");
	printf("Please type your first guess.\n");
	scanf("%d", &guess);

	while (1) {
		if (guess == mynum) {
			char ag;
			printf("Excellent! ,You guessed the number!");
			printf("Woulde you like to play again? ( y or n)\n");
			scanf("%s", &ag);
			if (ag == 'y') {
				return main();
			}
			else
				break;
		}
		else if (guess > mynum) {
			printf("Too high. Try again\n");
			printf("Please type your guess.\n");
			scanf("%d", &guess);
		}
		else {
			printf("Too low. Try again\n");
			printf("Please type your guess.\n");
			scanf("%d", &guess);
		}
	}
	return 0;
}