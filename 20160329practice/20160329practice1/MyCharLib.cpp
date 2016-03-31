char toUpperCase(char a) {
	if (a >= 65 && a <= 90) {
		return a;
	}
	else if (a >= 97 && a <= 122) {
		return a = a - 32;
	}
	else {
		return '0';
	}
}

char toLowerCase(char a) {
	if (a >= 65 && a <= 90) {
		return a = a + 32;
	}
	else if (a >= 97 && a <= 122) {
		return a;
	}
	else {
		return '0';
	}
}