#include<stdio.h>
#include<stdlib.h>
#include<time.h>

struct _card
{
	int face;
	char* suit;
};
typedef struct _card Card;

void displaycard(Card *card);
Card newCard(int number, char* suit);
void installcard(Card *card);
void shuttle(Card *card);

void swap(Card &a, Card &b) {
	Card temp = a;
	a = b;
	b = temp;
}

Card newCard(int number, char* suit) {
	Card card;
	card.face = number;
	card.suit = suit;
	return card;
}

void installcard(Card *card) {
	char *suit[] = { "¶Â®ç","¬õ¤ß","¤è¶ô","±öªá" };

	for (int i = 0; i < 52; i++) {
		for (int j = 0; j < 13; j++) {
			card[i] = newCard(j + 1, suit[i / 13]);
			i++;
		}
		i--;
	}
	//displaycard(card);
}

void displaycard(Card *card) {
	for (int i = 1; i <= 52; i++) {
		printf("%s %d\n", card[i - 1].suit, card[i - 1].face);
		if (i % 13 == 0) {
			puts("");
		}
	}
}

void shuttle(Card *card) {
	for (int i = 1; i <= 52; i++) {
		int j = rand() % 52;
		int k = rand() % 52;
		swap(card[j], card[k]);
	}
	displaycard(card);
}

int main(void) {
	Card *card = (Card*)malloc(sizeof(Card) * 52);
	installcard(card);
	srand(time(NULL));
	shuttle(card);
	
	free(card);
	return 0;
}

