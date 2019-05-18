#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
char d[16] = { '0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F' };
char a[100];
void turn(int n, int k)
{
	int r = 0;
	while (n != 0)
	{
		a[++r] = n % k;
		n = n / k;
	}
	for (int j = r; j >= 1; --j)
		printf("%c", d[a[j]]);
	printf("\n");
}

int main()
{
	int x, m;
	printf("请输入要转化的十进制数x和要转化成的进制m:\n");
	scanf("%d%d", &x, &m);
	turn(x, m);
	system("pause");
	return 0;
}