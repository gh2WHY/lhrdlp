#include<stdio.h>
#include<stdlib.h>
#include<math.h>
//int main() {
//	int x = 2;
//    int y = 0;
//	y =(int) pow(2, x);
//	printf("%d\n", y);
//	system("pause");
//	return 0;
//}
int main() {
	int s = 0, i, n;

	char a[8];

	printf("����һ����������");

	gets(a);

	n = strlen(a);        //�ַ�������n���������˼�λ��������

	for (i = 0; i < n; i++)    //ѭ������������������1

	{

		if (a[i] == '1')         //���Ϊ1����ʼ����ת��Ϊʮ����

			s = s + pow(2, n - i - 1); continue;

	}

	printf("����İ˽�����Ϊ%o\n", s);   //%o����˽��� 
	printf("�����ʮ������Ϊ%d\n", s); //%d���ʮ����
	printf("�����ʮ��������Ϊ%x\n", s);//%x���ʮ������
	system("pause");
	return 0;
}
