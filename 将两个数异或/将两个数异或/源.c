#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void Changer(int n, int m) {
	int a[30], b[30];
	int i = 0, j = 0;
	int c[30] = {0};
	int x = 0;
	int I = 0, J = 0;
	printf("%d��Ӧ�Ķ�������Ϊ:\n", n);
	do {
		a[i++] = n % 2;
		n /= 2;
		I = i;
	} while (n!= 0);

	for (i--; i >= 0; --i) {
		printf("%d", a[i]);

	}printf("\n");
	
	
	printf("%d��Ӧ�Ķ�������Ϊ:\n", m);
	do {
		b[j++] = m % 2;
		m /= 2;
		J = j;
	} while (m != 0);
	for (j--; j >= 0; --j) {
		printf("%d", b[j]);
		
	}printf("\n");
	printf("J:%d,I:%d", J,I);
	
	for (i = I-1, j = J-1; i >= 0, j >= 0; i--, j--) {
		if (a[i] ==b[j]) {
			c[x++] = 0;
		
		}
		else {
			c[x++] = 1;
			
		}
	}
	printf("\n");
	printf("���֮��Ľ����:\n");
	int max = (I > J) ? I : J;
	for (x = 0;x<max; ++x) {
		printf("%d", c[x]);
	}
	printf("\n");
	//�������ƵĽ��ת��Ϊʮ����
	
	int   y=0 ;
	/*,t=0,p=0;
	for (x = 0,p=max-1; x <=p; ++x,--p) {
		t = c[x];
		c[x] = c[p];
		c[p] = t;
	}
	printf("���ú������е�Ԫ��Ϊ:\n");
	for (x = 0; x < max; ++x) {
		printf("%d", c[x]);
	}
	printf("\n");*/
	for (x= 0; x<max; x++)    //ѭ������������������1

	{

		if (c[x] == 1)         //���Ϊ1����ʼ����ת��Ϊʮ����

		{
			y = y + pow(2, max - x - 1);//��һ�䲻ִ����ʲôԭ��
			
		}
		else {
			y = y + 0;
		}
	}
	printf("%d\n", y); 
	
}
int main() {
	int n = 0, m = 0;
	printf("��������Ҫ��������ʮ������:\n");
	scanf("%d %d", &n, &m);
	Changer(n,m);
	system("pause");
	return 0;
}