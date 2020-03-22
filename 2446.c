#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define SIZE 1000

int main() {
	int n;
	int k;


	scanf("%d", &n);
	k = n;


	for (int i = 1; i < n; i++) {
		for (int j = 1; j < i; j++) {
			printf(" ");
		}
		for (int j = 1; j < k * 2; j++) {
			printf("*");
		}
		printf("\n");
		k--;
	}

	for (int i = 0; i < n; i++) {
		for (int j = n-1; j > i; j--) {
			printf(" ");
		}

		for (int j = 1; j < k*2; j++) {
			printf("*");
		}
		printf("\n");
		k++;
	}
}