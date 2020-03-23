#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define SIZE 1000

int main() {
	int x, y;
	scanf("%d %d", &x, &y);

	if (x > 0) {
		if (y > 0) {
			printf("1");
		}
		else if (y < 0) {
			printf("4");

		}
	}
	else if (x < 0) {
		if (y > 0) {
			printf("2");

		}
		else if (y < 0) {
			printf("3");

		}

	}
}