//ʹ�ú���ʵ���������Ľ���
#include<stdio.h>
#include<stdlib.h>
void Swap(int* a, int* b) {
	int t;
	t= *a;
	*a = *b;
	*b = t;
	//printf("������a,b��ֵ�ֱ�Ϊ%d %d\n", a, b);
	//��printfж�ش˴�������Ҳ����ȷ�ģ������ڴ˴���������β�a,b��ֵ������ʵ��
	//�����Ĵ����ǵ���ģ�ֻ����ʵ�δ����βΡ�
}
int main() {
	int a = 5;
	int b = 6;
	printf("����ǰa,b��ֵ�ֱ�Ϊ%d %d\n", a, b);
	Swap(&a, &b);
	printf("������a,b��ֵ�ֱ�Ϊ%d %d\n", a, b);
	system("pause");
	return 0;

}