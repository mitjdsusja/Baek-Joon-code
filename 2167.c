#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
#define SIZE 300

	void check(int n, int m);
	int arr[SIZE][SIZE];

int main() {
	int n, m;

	int k;
	int a, b, c, d;

	scanf("%d %d", &n, &m);

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			scanf("%d", &arr[i][j]);
		}
	}


	int sum = 0;
	scanf("%d", &k);
	for (int i = 0; i < k; i++) {
		scanf("%d %d %d %d", &a, &b, &c, &d);
		for (int j = a-1; j < c; j++) {
			for (int h = b-1; h < d; h++) {
				sum += arr[j][h];
			}
		}
		printf("%d\n", sum);
		sum = 0;
	}
}


void check(int n ,int m) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}