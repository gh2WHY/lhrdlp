#define N 10
#include<stdio.h>
#include<stdlib.h>
int main() {
	int i = 0;
	int j = 0;
	int a[N][N] = { 0 };
	for (i = 0; i <N; ++i) {
		for (j = 0; j < N; ++j) {
			a[i][0] = 1;
			a[i][i] = 1;
		}
	}
	for (i = 1; i <N; ++i) {
		for (j = 1; j <= i; ++j) {
			a[i][j] = a[i - 1][j-1] + a[i-1][j];
		}
	}
	for (i = 0; i < N; ++i) {
		for (j = 0; j <=i; ++j) {
			printf("%6d", a[i][j]);
		}
		printf("\n");
	}
	system("pause");
	return 0;
}