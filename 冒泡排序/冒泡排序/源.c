#include<stdio.h>
#include<stdlib.h>
void Swap(int* x, int* y) {
	int temp = *x;
	*x = *y; 
	*y = temp;
}
void Bobblesort(int* arr, int size) {
	int bound = 0;
	for (; bound < size; ++bound) {
		for (int cur = 0; cur > bound; cur--) {
			if (arr[cur - 1] < arr[cur]) {
				Swap(&arr[cur - 1], &arr[cur]);
			}
		}
	}
}
int main() {
	int arr[4] = { 9,5,2,7 };
	int size = sizeof(arr) / sizeof(int);
	Bobblesort(arr, size);
	for (int i = 0; i < 4; ++i) {
		printf("%d  ", arr[i]);
	}
	system("pause");
	return 0;
}