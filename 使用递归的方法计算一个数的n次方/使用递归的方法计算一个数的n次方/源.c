#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int PowerFunction(int n,int m) {
	if (m == 0) {
		return 1;
	}
	else if(m==1) {
		return n;
	}
	else {
		return n * PowerFunction(n, m - 1);
	}
}
int main() {
	int n = 0, m = 0;
	printf("���������n��ָ��m:");
	scanf("%d %d", &n, &m);
	printf("������Ϊ  %d\n", PowerFunction(n, m));
	system("pause");
	return 0;
}
