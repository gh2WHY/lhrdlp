#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
//�ǵݹ�
int  Fabs(int n) {
	int i = 0;
	int jc = 1;
	for (i = 1; i <= n; ++i) {
		jc *=i;
	}
	return jc;
	
}
//�ݹ�
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
	printf("����������Ҫ�������;\n");
	scanf("%d", &n);
	printf("�ǵݹ�����Ľ׳�Ϊ%d\n", Fabs(n));
	printf("�ݹ�����Ľ׳�Ϊ%d\n", Fabs1(n));
	system("pause");
	return 0;
}