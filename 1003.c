#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
#define SIZE 1000

int fibo_1[SIZE] = { 0 };
int fibo_0[SIZE] = { 0 };

int fibonacci_1(int n);
int fibonacci_0(int n);


int main() {
	int T;
	int n;

	scanf("%d", &T);
	for (int i = 0; i < T; i++) {
		scanf("%d", &n);
		printf("%d %d\n", fibonacci_0(n), fibonacci_1(n));
	}
}

int fibonacci_1(int n) {
	if (n == 0)return 0;
	if (n == 1)return 1;
	if (n == 2)return 1;
	if (fibo_1[n] != 0) {
		return fibo_1[n];
	}
	return fibo_1[n]=fibonacci_1(n - 1) + fibonacci_1(n - 2);
}

int fibonacci_0(int n) {
	if (n == 0)return 1;
	if (n == 1)return 0;
	if (n == 2)return 1;
	if (fibo_0[n] != 0) {
		return fibo_0[n];
	}
	return fibo_0[n]=fibonacci_0(n - 1) + fibonacci_0(n - 2);
}