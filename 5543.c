#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define SIZE 1000

int main() {
	int n;
	int hbg=9999;
	int j=9999;
	for (int i = 0; i < 5; i++) {
		scanf("%d", &n);
		if (i < 3 && hbg > n) {
			hbg = n;
		}
		else if (i >= 3 && j > n) {
			j = n;
		}
	}
	printf("%d",hbg + j - 50);
}