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
	int counter = 1;

	while (1) {
		if (guess == mynum) {

			printf("Excellent! ,You guessed the number!\n");
			break;
		}
		else if (guess > mynum) {
			printf("Too high. Try again\n");
			printf("Please type your guess.\n");
			scanf("%d", &guess);
			counter++;
		}
		else {
			printf("Too low. Try again\n");
			printf("Please type your guess.\n");
			scanf("%d", &guess);
			counter++;
		}
	}
	if (counter < 10) {
		printf("Either you know the secret or you got lucky!\n");
	}
	else if (counter == 10) {
		printf("Ahah! You guessed the number!\n");
	}
	else
		printf("You should be able to do better!\n");
	char ag;
	printf("Woulde you like to play again? ( y or n )\n");
	scanf("%s", &ag);
	if (ag == 'y') {
		return main();
	}

	return 0;
}