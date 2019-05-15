//使用函数实现两个数的交换
#include<stdio.h>
#include<stdlib.h>
void Swap(int* a, int* b) {
	int t;
	t= *a;
	*a = *b;
	*b = t;
	//printf("交换后a,b的值分别为%d %d\n", a, b);
	//将printf卸载此处输出结果也是正确的，但是在此处输出的是形参a,b的值，而非实参
	//参数的传递是单向的，只能由实参传向形参。
}
int main() {
	int a = 5;
	int b = 6;
	printf("交换前a,b的值分别为%d %d\n", a, b);
	Swap(&a, &b);
	printf("交换后a,b的值分别为%d %d\n", a, b);
	system("pause");
	return 0;

}