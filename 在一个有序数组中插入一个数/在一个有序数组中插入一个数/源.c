#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main() {
	int a[8] = { 1,2,3,4,6,7,8 };
	int i = 0;
	int b = 0;
	printf("��������Ҫ�����ֵ:\n");
	scanf("%d", &b);
	for (i = 0; i < 10; i++)
		if (a[i] >b)
		{
			for (int j = 10; j > i; j--)
				a[j] = a[j - 1];
			a[i] = b;
			break;
		}
	printf("���������a�е�Ԫ��Ϊ;\n");
	 for (i = 0; i < 8; ++i) {
		printf("%3d", a[i]);
	 }
	 printf("\n");     
	 system("pause");
	 return 0;
}