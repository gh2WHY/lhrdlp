#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
//շת����������Լ��
int  fun1(int a, int b) {
	int r;
	r = a % b;
	while (r) {

		a = b;
		b = r;
		r = a % b;
	}
	return b;
}
//����С������
int fun2(int a, int b) {
	int x;
	x = a * b / fun1(a, b);
	return x;
}
//�����������������,�ж����Ƿ�Ϊż��,����,����2Լ��
//�ýϴ�����ȥ��С��,���Ž����ò����С���Ƚ�,�����߲����,������ظ��ýϴ�������С��
//���һ����Լ�������ɸ�2��ڲ��е�ʽ�ĳ˻�Ϊ���Լ��
//շת�����
int fun3(int a, int b) {
	int k = 0, t;
	while (a != b) {
		if (a % 2 == 0 && b % 2 == 0) {
			a = a / 2;
			b = b / 2;
			k++;
		}
		if (a < b) {
			t = a;
			a = b;
			b = t;
		}
		a = a - b;
	}
	if (k == 0) {
		return a;
	}
	else {
		return (2 * k*a);
	}
}
int main() {
	int a, b;
	printf("��������������:\n");
	scanf("%d%d", &a, &b);

	printf("շת�����   �����������Լ��Ϊ%d\n", fun1(a, b));
	printf("��С������Ϊ%d\n", fun2(a, b));
	printf("���������  �����������Լ��Ϊ%d\n", fun3(a, b));
	system("pause");
	return 0;
}