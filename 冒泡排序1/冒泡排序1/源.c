#include<stdio.h>
#include<stdlib.h>
void Swap(int* x, int* y) {
	int temp = *x;
	*x = *y;
	*y = temp;
}
void Bobblesort(int* arr, int size) {
	int bound = 0;
	for (bound=0; bound < size; ++bound) {
		for (int cur = size-1; cur > bound; cur--) {
			if (arr[cur - 1] < arr[cur]) {
				Swap(&arr[cur - 1], &arr[cur]);
			}
		}
	}
}
int main() {
	int arr[4] = { 4,7,5,8 };
	int size = sizeof(arr) / sizeof(int);
	Bobblesort(arr, size);
	for (int i = 0; i < 4; ++i) {
		printf("%d  ", arr[i]);
	}
	system("pause");
	return 0;
}