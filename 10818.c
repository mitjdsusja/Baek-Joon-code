#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define SIZE 1000

int main() {
	int min, max, n;
	int t;

	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d",&t);
		if (i == 0) {
			min = t;
			max = t;
		}
		if (min > t) {
			min = t;
		}
		if (max < t) {
			max = t;
		}
	
	}
	printf("%d %d", min, max);
}