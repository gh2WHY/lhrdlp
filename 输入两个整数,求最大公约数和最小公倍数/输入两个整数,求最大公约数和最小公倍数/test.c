#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
//辗转相除法求最大公约数
int  fun1(int a, int b) {
	int r;
	r = a % b;
	while (r) {

		a = b;
		b = r;
		r = a % b;
	}
	return b;
}
//求最小公倍数
int fun2(int a, int b) {
	int x;
	x = a * b / fun1(a, b);
	return x;
}
//任意给定两个正整数,判断其是否为偶数,若是,则用2约简
//用较大数减去较小数,接着讲所得差与较小数比较,若二者不相等,则继续重复用较大数减较小数
//则第一步中约掉的若干个2与第步中等式的乘积为最大公约数
//辗转相除法
int fun3(int a, int b) {
	int k = 0, t;
	while (a != b) {
		if (a % 2 == 0 && b % 2 == 0) {
			a = a / 2;
			b = b / 2;
			k++;
		}
		if (a < b) {
			t = a;
			a = b;
			b = t;
		}
		a = a - b;
	}
	if (k == 0) {
		return a;
	}
	else {
		return (2 * k*a);
	}
}
int main() {
	int a, b;
	printf("请输入两个整数:\n");
	scanf("%d%d", &a, &b);

	printf("辗转相除法   两个数的最大公约数为%d\n", fun1(a, b));
	printf("最小公倍数为%d\n", fun2(a, b));
	printf("更相减损术  两个数的最大公约数为%d\n", fun3(a, b));
	system("pause");
	return 0;
}