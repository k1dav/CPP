#include<stdio.h>
#include<string.h>

int main(void) {
	int times;
	char team[80], judge[80];
	scanf("%d", &times);
	getchar();

	for (int i = 1; i <= times; i++) {
		gets_s(team, 80);
		gets_s(judge, 80);
		int a = strlen(team);

		char n_team[80];
		int counter = 0;
		for (int j = 1; j <= a; j++) {
			if (team[j - 1] != ' ') {
				n_team[counter] = team[j - 1];
				counter++;
			}
		}
		n_team[counter] = '\0';

		if (strncmp(team, judge,80) == 0) {
			printf("Case %d: Yes\n", i);
		}
		else if (strncmp(n_team,judge,80)==0) {
			printf("Case %d: Output Format Error\n", i);
		}
		else {
			printf("Case %d: Wrong Answer\n", i);
		}

	}
}
