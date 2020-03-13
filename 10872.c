#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define SIZE 10000

int main() {
	int n;
	int result = 1;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		result *= i;
	}
	printf("%d", result);
}