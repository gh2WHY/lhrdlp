#include<stdio.h>
#include<stdlib.h>
//通过创建临时变量来统计字符串长度
//int   Strlen(char str[]) {
//	int n = 0,i=0;
//	for (i = 0; str[i] != '\0'; ++i) {
//		n++;
//	}
//	return n;
//}
int Strlen(char str[]) {
	
	if (str[0] == '\0') {
		return 0;
	}
	return 1 + Strlen(str+1);
}
int main() {
	char str[] = { "abcd" };
	printf("%d\n", Strlen(str));
	system("pause");
	return 0;
	
}