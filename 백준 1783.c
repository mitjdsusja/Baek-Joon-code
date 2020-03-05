#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define SIZE 100000

int main() {
	long long N, M;

	scanf("%lld %lld", &N, &M);

	if (N == 1) {
		printf("1");
	}

	if (N == 2) {
		if (M < 3) {
			printf("1");
		}
		else if ( M < 5) {
			printf("%d", 2);
		}
		else if (M >= 5) {
			printf("%d", 3);
		}
	}
	if (N >= 3 ) {
		if (M < 5) {
			printf("%lld", M);
		}
		else if (M <7) {
			printf("%d", 4);
		}
		else if ( M == 7) {
			printf("%d", 5);
		}
		else {
			printf("%lld", M - 2);
		}
	}
}
