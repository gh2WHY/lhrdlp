//����һ�����磨1234��������������λ��֮��
//���1+2+3+4=10
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
//�ǵݹ�
int Sta(int n) {
	int sum = 0;
	int a = 0;
	while (n) {
		a=n% 10;
		sum += a;
		n = n / 10;
	}
	return sum;
}
//�ݹ�
int   STA(int n) {
	if (n == 0) {
		return 0;
	}	
	return n % 10 + STA(n / 10);
	}

int main() { 
	int n = 0;
	printf("��������Ҫ�������:\n");
	scanf("%d", &n);
	printf("�ǵݹ��Ϊ%d\n",Sta(n));
	printf("�ݹ��Ϊ%d\n", STA(n));;
	system("pause");
	return 0;
}