#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define SIZE 1000

int main() {
	int hour, min;

	scanf("%d %d", &hour, &min);

	if (min < 45) {
		if (hour == 0) {
			hour = 23;
			min += 60;
		}
		else {
			hour--;
			min += 60;

		}
	}
	printf("%d %d", hour, min-45);
}