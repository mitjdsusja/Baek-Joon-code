#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define SIZE 1000

int main() {
	int n;
	scanf("%d", &n);

	for (int i = 0; i < n*2; i++) {
		if (i % 2 != 0) {
			printf(" ");
			n--;
		}
		for (int j = 1; j <= n; j++) {
			if (j % 2 == 1) {
				printf("*");
			}
			else {
				printf(" ");
			}
		}
		if (i % 2 != 0) {
			n++;
		}

		printf("\n");
	}
}