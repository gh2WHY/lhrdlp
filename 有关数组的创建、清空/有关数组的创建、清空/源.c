#define SIZE 7
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//�������е�Ԫ������
//��һ��Ԫ�ر�Ϊ���һ�������һ��ת������һ��
//abcdef���ú�Ϊfedcba
void Reserve(char* s) {
	int temp = 0;
		for (int i = 0,j=SIZE-1; i < j; ++i,--j) {
			temp= s[i];
			s[i] = s[j];
			s[j] = temp;
		}
	printf("���ú������е�Ԫ��Ϊ:\n");
	for (int i = 0; i < SIZE; ++i)
		printf("%c ", s[i]);
}
void Empty(char* s) {
	for (unsigned int i = 0; i < SIZE; ++i) {
		s[i] = '\0';
	}
	printf("��պ������е�Ԫ��Ϊ:\n");
	for (int i = 0; i < SIZE; ++i)
		printf("%c ", s[i]);
}
int main() {
	char s[SIZE] = "abcdefg";
	printf("�����е�Ԫ��Ϊ:\n");
	for (int i = 0; i < SIZE; ++i) 
		printf("%c ", s[i]);
	printf("\n");
	Reserve(s);
	printf("\n");
	Empty(s);
	printf("\n");
	system("pause");
	return 0;
}
//int main() {
//	char s[SIZE] = "abcdefg";
//	printf("�����е�Ԫ��Ϊ:\n"); 
//	for (int i = 0; i < SIZE; ++i) {
//		printf("%c ", s[i]);
//	}
//	printf("\n");
//	//��ν�һ�������е�Ԫ������
//	int temp = 0;
//	for (int i = 0,j=SIZE-1; i < j; ++i,--j) {
//		temp= s[i];
//		s[i] = s[j];
//		s[j] = temp;
//	}
//	printf("���������е�Ԫ��Ϊ:\n");
//	for (int i = 0; i < SIZE; ++i) {
//		printf("%c ", s[i]);
//	}
//	system("pause");
//	return 0;
//}