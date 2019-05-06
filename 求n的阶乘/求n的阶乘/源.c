#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int fun(int n)
{
	int i,j=1;
	for (i = 1; i <= n; i++)
	{
		j = j * i;
	}
	return j;
}
int main()
{
	int n;
	printf("请输入数字n");
	scanf("%d", &n);
	printf("%d的阶乘为%d\n", n, fun(n));
	system("pause");
}