//ʹ�ú���ʵ���������Ľ���
#include<stdio.h>
#include<stdlib.h>
void Swap(int a, int b) {
	int t = a;
	a = b;
	b = t;
	printf("������a,b��ֵ�ֱ�Ϊ%d %d\n", a, b);
}
int main() {
	int a = 5;
	int b = 6;
	printf("����ǰa,b��ֵ�ֱ�Ϊ%d %d\n", a, b);
	Swap(a, b);
	system("pause");
	return 0;

}