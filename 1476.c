#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define SIZE 10000

int main() {
	int E, S, M;
	scanf("%d %d %d", &E, &S, &M);
	int i = 0;
	int x, y, z;
	while (1) {
		x = i % 15; y = i % 28; z = i % 19;
		if ((E-1 ==x && S-1 ==y) && M-1 ==z)break;
		i++;
	}
	printf("%d", i+1);
}
