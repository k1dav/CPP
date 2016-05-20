#include<stdio.h>

char base64[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";

void encoding(char in[], char out[]) {
	int index[4];
	index[0] = (in[0] >> 2) & 0x3f;
	index[1] = ((in[0] & 0x03) << 4) | ((in[1] >> 4) & 0x0f);
	index[2] = ((in[1] & 0x0f) << 2) | ((in[2] >> 6) & 0x03);
	index[3] = in[2] & 0x3f;
	for (int i = 0; i <= 3; i++) {
		out[i] = base64[index[i]];
	}
	out[4] = '\0';
}
void encoding1(char in[], char out[]) {
	int index[4];
	index[0] = (in[0] >> 2) & 0x3f;
	index[1] = ((in[0] & 0x03) << 4) | ((in[1] >> 4) & 0x0f);
	index[2] = ((in[1] & 0x0f) << 2);
	for (int i = 0; i <= 2; i++) {
		out[i] = base64[index[i]];
	}
	out[3] = '=';
	out[4] = '\0';
}
void encoding2(char in[], char out[]) {
	int index[4];
	index[0] = (in[0] >> 2) & 0x3f;
	index[1] = ((in[0] & 0x03) << 4);

	for (int i = 0; i <= 1; i++) {
		out[i] = base64[index[i]];
	}
	out[2] = '=';
	out[3] = '=';
	out[4] = '\0';
}

int main(void) {
	char in[4];
	printf("Please input the base64 code.\n");
	scanf("%s", &in);
	int counter = 0;
	int c = 0;
	while (in[c] != '\0') {
		counter++;
		c++;
	}
	char out[5];
	if (counter % 3 == 0) {
	
		encoding(in, out);
	}
	else if (counter % 3 == 1) {
		encoding2(in, out);
	}
	else {
		encoding1(in, out);
	}

	for (int i = 0; i <= 3; i++) {
		printf("%c", out[i]);
	}
	
}