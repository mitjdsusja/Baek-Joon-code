#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define SIZE 1000


int main() {
	char c;
	int count[SIZE] = { 0 };
	int min = 0;
	int isOverlap = 0;
	int result;
	char Alpha[SIZE] = { 'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z' };
	

	for (;;) {
		scanf("%c", &c);
		if (c == '\n')break;

		switch (c) {
			case 'A':
			case 'a': count[0]++; continue;
			case 'B':
			case 'b': count[1]++; continue;
			case 'C':
			case 'c': count[2]++; continue;
			case 'D':
			case 'd': count[3]++; continue;
			case 'E':
			case 'e': count[4]++; continue;
			case 'F':
			case 'f': count[5]++; continue;
			case 'G':
			case 'g': count[6]++; continue;
			case 'H':
			case 'h': count[7]++; continue;
			case 'I':
			case 'i': count[8]++; continue;
			case 'J':
			case 'j': count[9]++;continue;
			case 'K':
			case 'k': count[10]++; continue;
			case 'L':
			case 'l': count[11]++; continue;
			case 'M':
			case 'm': count[12]++; continue;
			case 'N':
			case 'n': count[13]++;continue;
			case 'O':
			case 'o': count[14]++; continue;
			case 'P':
			case 'p': count[15]++; continue;
			case 'Q':
			case 'q': count[16]++; continue;
			case 'R':
			case 'r': count[17]++;continue;
			case 'S':
			case 's': count[18]++;continue;
			case 'T':
			case 't': count[19]++; continue;
			case 'U':
			case 'u': count[20]++; continue;
			case 'V':
			case 'v': count[21]++; continue;
			case 'W':
			case 'w': count[22]++; continue;
			case 'X':
			case 'x': count[23]++; continue;
			case 'Y':
			case 'y': count[24]++; continue;
			case 'Z':
			case 'z': count[25]++; continue;

		}
	}
	for (int i = 0; i < 26; i++) {
		if (min < count[i]) {
			min = count[i];
			isOverlap = 0;
			result = i;
		}
		else if (min == count[i]) {
			isOverlap = 1;
		}
	}
	if (isOverlap == 1) {
		printf("?");
	}
	else {
		printf("%c", Alpha[result]);
	}
}