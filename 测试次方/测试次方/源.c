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

	printf("输入一个二进制数");

	gets(a);

	n = strlen(a);        //字符串长度n代表输入了几位二进制数

	for (i = 0; i < n; i++)    //循环检查输入二进制数的1

	{

		if (a[i] == '1')         //如果为1，开始计算转换为十进制

			s = s + pow(2, n - i - 1); continue;

	}

	printf("输出的八进制数为%o\n", s);   //%o输出八进制 
	printf("输出的十进制数为%d\n", s); //%d输出十进制
	printf("输出的十六进制数为%x\n", s);//%x输出十六进制
	system("pause");
	return 0;
}
