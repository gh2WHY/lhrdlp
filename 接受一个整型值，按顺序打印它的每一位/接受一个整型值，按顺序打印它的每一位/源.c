#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
void   Print(int n) {
	if (n > 9) {
		 Print(n / 10);
	}
	printf("%d  ", (n % 10));
}
int main() {
	int n = 0;
	printf("��������Ҫ��ӡ����:\n");
	scanf("%d", &n);
	Print(n);
	 printf("\n");
	system("pause");
	return 0;
}
