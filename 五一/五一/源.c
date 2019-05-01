//使用函数实现两个数的交换
#include<stdio.h>
#include<stdlib.h>
void Swap(int a, int b) {
	int t = a;
	a = b;
	b = t;
	printf("交换后a,b的值分别为%d %d\n", a, b);
}
int main() {
	int a = 5;
	int b = 6;
	printf("交换前a,b的值分别为%d %d\n", a, b);
	Swap(a, b);
	system("pause");
	return 0;

}