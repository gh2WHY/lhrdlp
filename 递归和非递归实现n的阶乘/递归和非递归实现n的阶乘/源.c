#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
//非递归
int  Fabs(int n) {
	int i = 0;
	int jc = 1;
	for (i = 1; i <= n; ++i) {
		jc *=i;
	}
	return jc;
	
}
//递归
int Fabs1(int n) {
	 if (n == 1) {
		 return 1;
	 }
	 else {
		 return n * Fabs(n - 1);
	 }
 }
int main() {
	int n;
	printf("请输入你想要计算的数;\n");
	scanf("%d", &n);
	printf("非递归该数的阶乘为%d\n", Fabs(n));
	printf("递归该数的阶乘为%d\n", Fabs1(n));
	system("pause");
	return 0;
}