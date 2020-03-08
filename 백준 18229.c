#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define SIZE 101

int main() {
	int tot[SIZE][SIZE];
	int N, M, K;
	int count = 0;
	int result_1 = 999;
	int result_2 = 0;
	
	scanf("%d %d %d", &N, &M, &K);

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			scanf("%d", &tot[i][j]);
		}
	}

	for (int i = 0; i < N; i++) {
		count = 0;
		for (int j = 0; j < M; j++) {
			count += tot[i][j];
			if (count >=  K && result_1 > j+1) {
				result_1 = i+1;
				result_2 = j+1;
				break;
			}
		}
	}

	printf("%d %d", result_1, result_2);
} 