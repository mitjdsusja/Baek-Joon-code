#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define SIZE 1000

int main() {
	int zero_count=0;
	int one_count=0;
	char array[SIZE];
	char array2[SIZE];
	

	int i = 0;

	gets(array);
	strcpy(array2, array);

	while (i < strlen(array)) {
		if (array[i] == '1') {
			array[i] = '0';
		}
		else {
			i++;
			continue;
		}
		if (array[i + 1] == '1') {
			i++;
			continue;
		}
		one_count++;
		i++;
	}
	int j = 0;
	while (j < strlen(array2)) {
		if (array2[j] == '0') {
			array2[j] = '1';
		}
		else {
			j++;
			continue;
		}
		if (array2[j + 1] == '0') {
			j++;
			continue;
		}
		zero_count++;
		j++;
	}
	if (one_count > zero_count) {
		printf("%d", zero_count);
	}
	else {
		printf("%d", one_count);
	}
}