#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define SIZE 1000

int main() {
	int N;
	char array[SIZE];
	int arrayLen;
	int is_O = 0;
	int combo = 1;
	int result = 0;
	char empty;

	scanf("%d ", &N);
	for (int i = 0; i < N; i++) {
		gets(array);
		arrayLen = strlen(array);

		for (int j = 0; j < arrayLen; j++) {
			if (array[j] == 'O') {
				result += combo;
			}
			else if (array[j] == 'X') {
				combo = 1;
			}
			if (array[j + 1] == 'O' && array[j]=='O') {
				combo++;
			}
			else if(array[j+1] == 'X'){
				combo = 1;
			}
		}
		combo = 1;
		printf("%d\n", result);
		result = 0;
	}
}