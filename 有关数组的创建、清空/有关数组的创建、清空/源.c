#define SIZE 7
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//将数组中的元素逆置
//第一个元素变为最后一个，最后一个转换到第一个
//abcdef逆置后为fedcba
void Reserve(char* s) {
	int temp = 0;
		for (int i = 0,j=SIZE-1; i < j; ++i,--j) {
			temp= s[i];
			s[i] = s[j];
			s[j] = temp;
		}
	printf("逆置后数组中的元素为:\n");
	for (int i = 0; i < SIZE; ++i)
		printf("%c ", s[i]);
}
void Empty(char* s) {
	for (unsigned int i = 0; i < SIZE; ++i) {
		s[i] = '\0';
	}
	printf("清空后数组中的元素为:\n");
	for (int i = 0; i < SIZE; ++i)
		printf("%c ", s[i]);
}
int main() {
	char s[SIZE] = "abcdefg";
	printf("数组中的元素为:\n");
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
//	printf("数组中的元素为:\n"); 
//	for (int i = 0; i < SIZE; ++i) {
//		printf("%c ", s[i]);
//	}
//	printf("\n");
//	//如何将一个数组中的元素逆置
//	int temp = 0;
//	for (int i = 0,j=SIZE-1; i < j; ++i,--j) {
//		temp= s[i];
//		s[i] = s[j];
//		s[j] = temp;
//	}
//	printf("逆置数组中的元素为:\n");
//	for (int i = 0; i < SIZE; ++i) {
//		printf("%c ", s[i]);
//	}
//	system("pause");
//	return 0;
//}