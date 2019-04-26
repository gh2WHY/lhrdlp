#include<stdio.h>
#include<stdlib.h>
int main() {
	int a = 3;
	int* p = &a;
	int** pp = &p;

	printf("%d  \n", a);
	printf("%d  \n", *p);
	printf("%d  \n", **pp);
	printf("%p  \n", &a);
	printf("%p \n", p);
	printf("%p \n", &p);
	printf("%p\n", pp);
	printf("%p\n", *pp);
	system("pause");
	return 0;
}