#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
//int fun(int n) {
//	int i;
//	int ret = 1;
//	for (i = 1; i <= n; i++) {
//		ret = ret * i;
//	}
//	return ret;
//}
//ͨ���ݹ�ʵ��
int fun(int n) {
	if (n == 1) {
		return 1;
	}
	return n * fun(n - 1);
}

int main() {
	int n = 0;
	printf("������n��ֵ:\n");
	scanf("%d", &n);
	printf("%d\n", fun(n));
	system("pause");
	return 0;
}