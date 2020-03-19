#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define SIZE 1000

int main() {
	int N;
	int temp;
	int array[SIZE] = { 0 };

	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		scanf("%d", &array[i]);
	}
	if (N == 1) {
		printf("%d", array[0] * array[0]);
		return 0;
	}
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N - 1 - i; j++) {
			if (array[j] > array[j + 1]) {
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
			}
		}
	}
	printf("%d", array[0] * array[N - 1]);
}