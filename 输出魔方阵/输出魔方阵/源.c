//所谓的魔方阵是指它的每一行每一列和对角线之和均相等
//要求输出1~n^2的自然数的魔方阵
//魔方阵中的规律
//将1放在第一行中间一列
//从2开始直到n*n止个数一次按以下规律存放:每一个数存放的行比前一个数的行数减1,列数加1
//如果上一数的行数为1,则下一个数的行数为n(即最后一行),如1在第一行,则2应该在最后一行,且列数加1
//当上一个数的列数为n时,下一个数的列数应该为1,行数减1.如2在第三行最后一列,则3应在第二行第一列
//如果按照上面的规则确定的位置上已经有数,或者上一个数是第1行第n列时,则把下一个数放在上一个数的下面
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
void Output(int n) {
	int a[15][15];
	int i, j ;
	int k ;
	for (i = 1; i <= n; ++i) {
		for (j = 1; j <= n; ++j) {
			a[i][j] = 0;
		}
	}
	j = n / 2 + 1;
	a[1][j] = 1;
	for (k = 2; k <= n * n; ++k) {
		i = i - 1;
		j = j + 1;
		if ((i < 1) && (j > n)) {
			i = i + 2;
			j = j - 1;
		}
		else {
			if (i < 1) {
				i = n;
			}if (j > n) {
				j = 1;
			}
		}
		if (a[i][j] == 0) {
			a[i][j] = k;
		}
		else {
			i = i + 2;
			j = j - 1;
			a[i][j] = k;
		}
	}
	for (i =1; i <= n; ++i) {
		for (j = 1; j <= n; ++j) {
			printf("%5d", a[i][j]);
		}
		printf("\n");
	}
}
int main() {
	int n = 0;
	printf("请输入您想要的奇数n:\n");
	while(1) {
	scanf("%d", &n);
		if (n % 2 == 0) {
			printf("输入有误,请重新输入!\n");
		}
		else {
			break;
		}
	}
	Output(n);
	system("pause");
	return 0;
}