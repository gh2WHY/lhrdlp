#include<stdio.h>
#include<stdlib.h>
//算数运算（加减法）
void fun1(int a, int b)
{
	a = b - a;//求出a，b两点之间的距离，并将其保存在a中
	b = b - a;//求出a到原点的距离（b到原点的距离与ab两点距离之差），并且将其保存在b中
	a = a + b;//求出b到原点的距离（a到原点的距离与ab两点距离之和），并且将其保存在a中。完成交换。
	printf("a b的值分别为：%d %d\n",a,b);
	
}
//通过异或运算能够使数据中的某些位翻转，其他位不变。
//这就意味着任意一个数与任意一个给定的值连续异或两次，值不变。
void fun2(int a, int b)
{
	a = a ^ b;
	b = b ^ a;
	a = a ^ b;
	printf("a b的值分别为：%d %d\n", a, b);
	system("pause");
}
main()
{
	int a = 12, b = 10;
	fun1(a, b);
	fun2(a, b);
}
