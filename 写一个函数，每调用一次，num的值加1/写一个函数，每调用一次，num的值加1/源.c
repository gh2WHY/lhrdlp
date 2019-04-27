#include<stdio.h>
#include<stdlib.h>

void fun(int* x) {
	*x = *x  + 1;
	printf("%d\n", *x);
}int main() {
	int x = 0;
	fun(&x);
	fun(&x);
	fun(&x);
	fun(&x);
	system("pause");
	return 0;
}