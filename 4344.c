#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define SIZE 1000


int main() {
	int x, y, z;
	int a[3];
	int max=0;
	int sum=0;

	for (;;) {
		scanf("%d %d %d", &a[0], &a[1], &a[2]);
		for (int i = 0; i < 3; i++) {
			if (a[i] == 0) {
				return 0;
			}
		}
		for (int i = 0; i < 3; i++) {
			if (max < a[i]) {
				max = a[i];
			}
		}
		for (int i = 0; i < 3; i++) {
			a[i]=pow(a[i], 2);
		}
		max = pow(max, 2);

		for (int i = 0; i < 3; i++) {
			if (max != a[i]) {
				sum += a[i];
			}
		}
		if (max == sum) {
			printf("right");
		}
		else {
			printf("wrong");
		}
		sum = 0;
	}
}