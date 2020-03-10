#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define SIZE 10000

int main() {
	int N, K;
	int arr[SIZE] = { 0 };
	int plug[SIZE] = { 0 };
	int isPlugin[SIZE] = { 0 };
	int isFull = 0;
	int EmptyCount = 0;
	int count;
	int result = 0;

	scanf("%d %d", &N, &K);
	for (int i = 0; i < K; i++) {
		scanf("%d", &arr[i]);
	}


	count = 0;
	int last = 0;
	int r_last = -1;
	int last_plug = 0;


	for (int i = 0; i < K; i++) {

		if (isFull == 0) {
			if (isPlugin[arr[i] - 1] == 0) {

				plug[EmptyCount] = arr[i];
				isPlugin[arr[i] - 1] = 1;
				EmptyCount++;
				if (EmptyCount == N)isFull = 1;
			}
		}
		else if (isFull == 1) {

			for (int j =0; j < N; j++) {
				for (int k = count; k < K; k++) {
					if (plug[j] != arr[k]) {
						last++;
						
					}
					else {
						break;
					}
				}
				if (r_last < last) {
					r_last = last;
					last_plug = j;
					
				}
				last = 0;
			}

			if (isPlugin[arr[i] - 1] == 0) {
				isPlugin[plug[last_plug]-1] = 0;
				result++;
				plug[last_plug] = arr[count];
				isPlugin[arr[count]-1] = 1;
			}

			
			r_last = -1;
		}
		count++;
		
	}
	printf("%d", result);
	
}
