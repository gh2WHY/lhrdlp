#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#define N 5
//第一种入门版
//全世界最low的程序,没有之一,你TM就是一个失败的人
//int main() {
//	int a;
//	int x, y, z, i, j;
//	printf("请输入一个数:\n");
//	scanf("%d", &a);
//	x = a;
//	y = 10*a + x;
//	z = 100*a + y;
//	i = 1000 * a + z;
//	j = 10000 * a + i;
//	printf("%d", x + y + z + i + j);
//	printf("\n");
//	system("pause");
//	return 0;
//}
//进阶版
//int main() {
//		int a,i;
//		int sum = 0, x=0;
//		printf("请输入一个数a:\n");
//		scanf("%d", &a);
//		for (i = 0; i <N;++i) {
//			x = 10 * x + a;
//			sum += x;
//		}		
//		printf("%d", sum);
//		printf("\n");
//		system("pause");
//		return 0;
//	}
//高阶版
int fun(int n, int a) {
	int i;
	int sum = 0,t=0;
	for (i = 0; i < n; i++) {
		t = 10 *t + a;
		sum += t;
	}
	return sum ;
}
int main() {
	int n, a;
	printf("请输入你要计算的长度n:\n");
	scanf("%d", &n);
	printf("请输入你要计算的数字a:\n");
	scanf("%d", &a);
	printf("%d\n", fun(n, a));
	system("pause");
	return 0;
}