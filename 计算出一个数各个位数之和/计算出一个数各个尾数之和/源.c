//输入一个数如（1234），计算出其各个位数之和
//输出1+2+3+4=10
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
//非递归
int Sta(int n) {
	int sum = 0;
	int a = 0;
	while (n) {
		a=n% 10;
		sum += a;
		n = n / 10;
	}
	return sum;
}
//递归
int   STA(int n) {
	if (n == 0) {
		return 0;
	}	
	return n % 10 + STA(n / 10);
	}

int main() { 
	int n = 0;
	printf("请输入你要计算的数:\n");
	scanf("%d", &n);
	printf("非递归和为%d\n",Sta(n));
	printf("递归和为%d\n", STA(n));;
	system("pause");
	return 0;
}