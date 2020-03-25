#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define SIZE 1000000


int main() {
	char a[SIZE];
	int count = 0;
	int isNull = 0;
	gets(a);

	for (int i = 0; i < strlen(a); i++) {
		if (a[i] != ' ') {
			isNull = 1;
		}
		else if (a[i] == ' ' && isNull == 1) {
			isNull = 0;
			count++;
		}
		if (i == strlen(a) - 1 && a[i] != ' ') {
			count++;
		}
	}
	printf("%d", count);
}