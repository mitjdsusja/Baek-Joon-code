#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define SIZE 10000

int main() {
	int n;
	int count = 0;
	scanf("%d", &n);

	while (n != 0) {
		if (n % 2 == 1) {
			count++;
		}
		n = n / 2;
	}
	printf("%d", count);
}
