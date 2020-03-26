#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define SIZE 1000


int main() {
	int T;
	int N;
	int array[SIZE] = { 0 };
	int sum=0;
	int avg;
	int avgOver=0;

	scanf("%d", &T);
	for (int i = 0; i < T; i++) {
		scanf("%d", &N);
		for (int j = 0; j < N; j++) {
			scanf("%d", &array[j]);
			sum += array[j];
		}
		avg = sum / N;

		for (int j = 0; j < N; j++) {
			if (array[j] > avg) {
				avgOver++;
			}
		}
		printf("%.3lf%%\n", (double)avgOver / N*100);
		avgOver = 0;
		avg = 0;
		sum = 0;
	}
}