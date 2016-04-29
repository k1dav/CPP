#include<stdlib.h>
#include<iostream>
#include<stdio.h>

void backtrack(int n, int N);
char s[4] = { 'a', 'b', 'b','c' };    // 字串，需要預先由小到大排序
char solution[4];
bool used[4];

int main(void) {
	backtrack(0, 4);
}

void backtrack(int n, int N)
{
	if (n == N)
	{
		for (int i = 0; i < N; i++)
			printf("%c", solution[i]);
		puts("");
		return;
	}

	char last_letter = '\0';
	for (int i = 0; i<N; i++)
	{                           // if not 改成 continue
		if (used[i]) continue;
		if (s[i] == last_letter) continue;  // 避免枚舉一樣的字母

		last_letter = s[i];     // 紀錄剛才使用過的字母
		used[i] = true;

		solution[n] = s[i];
		backtrack(n + 1, N);

		used[i] = false;
	}
}