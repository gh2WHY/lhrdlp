#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main() {
	int a[30];
	int i = 0, n = 0;
	printf("请输入你要转化的十进制数:\n");
	scanf("%d", &n);
	
	do {
		a[i++] = n % 2;
		n /= 2;
	} while (n != 0);

	for (i--; i >= 0; --i) {
		printf("%d", a[i]);
	}
	printf("\n");
	system("pause");
	return 0;
}