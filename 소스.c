#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define SIZE 100000

int main() {
	int room;
	int empty = 0;
	int n[10] = { 0 };
	int plus = 0;
	int result = 0;


	scanf("%d", &room);
	for (;;) {
		empty = room % 10;
		switch (empty) {
			case 1: {
				n[1]++;
				break;
			}
			case 2: {
				n[2]++;
				break;
			}
			case 3: {
				n[3]++;
				break;
			}
			case 4: {
				n[4]++;
				break;
			}
			case 5: {
				n[5]++;
				break;
			}
			case 6: {
				n[6]++;
				break;
			}

			case 7: {
				n[7]++;
				break;
			}
			case 8: {
				n[8]++;
				break;
			}
			case 9: {
				n[9]++;
				break;
			}
			case 0: {
				n[0]++;
				break;
			}
		}
		room = room / 10;
		if (room == 0)break;
	}
	plus = (n[6] + n[9]) % 2;
	n[6] = (n[6] + n[9]) / 2;
	if (plus == 1)n[6]++;

	for (int i = 0; i < 9; i++) {
		if (result < n[i]) {
			result = n[i];
		}
	}
	printf("%d", result);
}