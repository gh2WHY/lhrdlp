#define  _CRT_SECURE_NO_WARNINGS
#define SIZE 100
//输入一行字符，分别统计出其中英文字母、空格、数字和其他字符的个数
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void Insert(char* str) {
	char ch;
	printf("请输入s1\n");
	for (int i = 0; i < SIZE; ++i) {
		ch = getchar();
		if (ch == '\n') {
			str[i] = '\0';
			break;
		}
		str[i] = ch;
	}
	printf("该字符串为%s\n", str);
}
void STA(char* str) {
	int Wnum = 0;
	int wnum = 0;
	int dnum = 0;
	int spacenum = 0;
	int othernum = 0;
	for (int i = 0;str[i]!='\0'; ++i) {
		if (str[i] >= 65 &&str[i] <= 90 ) {
			Wnum += 1;
		}
		else if (str[i] >= 97 && str[i] <= 122) {
			wnum=wnum+1;
		}
		else if (str[i] == ' ') {
			spacenum += 1;
		}
		else if (str[i] >=48&&str[i] <=57) {
			dnum += 1;
		}
		else {
			othernum += 1;
		}
		
	}
	printf("大写字母的个数为%d\n", Wnum);
	printf("小写字母的个数为%d\n", wnum);
	printf("数字的个数为%d\n", dnum);
	printf("空格的个数为%d\n",spacenum);
	printf("其他字符的个数为%d\n", othernum);
}
int main() {
	char str[SIZE] ;
	Insert(str);
	STA(str);
	system("pause");
	return 0;
}