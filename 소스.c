#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define SIZE 100000


int main() {
	int test, N, s1[SIZE], s2[SIZE];
	int temp = 0;
	int count = 0;
	int result = 0;
	int L = 1;


	scanf("%d", &test);
	for (int i = 0; i < test; i++) {
		L = 1;
		result = 1;

		scanf("%d", &N);
		for (int j = 0; j < N; j++) {
			scanf("%d %d", &s1[j], &s2[j]);
		}

	
		for (int j = 0; j < N; j++) {//정렬 시간초과
			for (int k = 0; k < N - 1 - j; k++) {
				if (s1[k] > s1[k + 1]) {
					temp = s1[k];
					s1[k] = s1[k + 1];
					s1[k + 1] = temp;
					temp = s2[k];
					s2[k] = s2[k + 1];
					s2[k + 1] = temp;
				}
			}
		}


		printf("-------\n");
		for (int j = 0; j < N; j++) {
			printf("%d %d", s1[j], s2[j]);
			printf("\n");
		}
		printf("-------\n");
		//	
		count = N-1;
		for (int j = 0; j < N - 1; j++) {
			if (s2[count] == L) {
				result++;
				L++;
				
			}
			count--;
		}
		printf("%d", result);
	}

}
