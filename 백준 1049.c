#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define SIZE 100000

int main() {
	int N, M;
	int arr1[50];
	int arr2[50];
	int temp;
	int result = 0;
	int b_6 = 0;
	int b_1 = 0;

	scanf("%d %d", &N, &M);

	for (int i = 0; i < M; i++) {
		scanf("%d %d", &arr1[i], &arr2[i]);
	}


	for (int i = 0; i < M; i++) {
		for (int j = 0; j < M - 1 - i; j++) {

			if (arr1[j] > arr1[j + 1]) {
				temp = arr1[j];
				arr1[j] = arr1[j + 1];
				arr1[j + 1] = temp;
			}
			if (arr2[j] > arr2[j + 1]) {
				temp = arr2[j];
				arr2[j] = arr2[j + 1];
				arr2[j + 1] = temp;
			}
		}
	}

	if (arr1[0] < arr2[0] * 6) {
		result += arr1[0] * (N / 6);
	}
	else {
		result += arr2[0] * (N / 6)*6;
	}
	if (arr1[0] < arr2[0] * (N % 6)) {
		result += arr1[0];
	}
	else {
		result += arr2[0] * (N % 6);
	}
	printf("%d", result);
}