#define  _CRT_SECURE_NO_WARNINGS
#define SIZE 100
//����һ���ַ����ֱ�ͳ�Ƴ�����Ӣ����ĸ���ո����ֺ������ַ��ĸ���
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void Insert(char* str) {
	char ch;
	printf("������s1\n");
	for (int i = 0; i < SIZE; ++i) {
		ch = getchar();
		if (ch == '\n') {
			str[i] = '\0';
			break;
		}
		str[i] = ch;
	}
	printf("���ַ���Ϊ%s\n", str);
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
	printf("��д��ĸ�ĸ���Ϊ%d\n", Wnum);
	printf("Сд��ĸ�ĸ���Ϊ%d\n", wnum);
	printf("���ֵĸ���Ϊ%d\n", dnum);
	printf("�ո�ĸ���Ϊ%d\n",spacenum);
	printf("�����ַ��ĸ���Ϊ%d\n", othernum);
}
int main() {
	char str[SIZE] ;
	Insert(str);
	STA(str);
	system("pause");
	return 0;
}