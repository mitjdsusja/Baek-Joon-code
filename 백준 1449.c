#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define SIZE 10000

int main() {
	int N, L;
	int arr[SIZE];
	int use_count=0;
	int cover = 0;
	int temp;

	scanf("%d %d", &N, &L);
	for (int i = 0; i < N; i++) {
		scanf("%d", &arr[i]);
	}
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N - 1 - i; j++) {
			if (arr[j] > arr[j + 1]) {
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	for (int i = 0; i < N; i++) {
		if (arr[i] > cover) {
			use_count++;
			cover=arr[i] + L - 1;
		}
	}
	printf("%d", use_count);
}