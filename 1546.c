#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define SIZE 1000


int main() {
	int n;
	double a[SIZE];
	int max = 0;
	double sum=0;
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%lf", &a[i]);
		if (a[i] > max) {
			max = a[i];
		}
	}

	for (int i = 0; i < n; i++) {
		a[i] = a[i] / max * 100;
	}

	for (int i = 0; i < n; i++) {
		sum += a[i];
	}
	double avg = 0;
	avg = sum / n;
	printf("%g", avg);
}