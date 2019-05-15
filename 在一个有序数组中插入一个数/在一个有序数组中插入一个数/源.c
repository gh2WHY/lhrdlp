#include<stdio.h>
#include<stdlib.h>
int main() {
	int a[8] = { 1,2,3,4,6,7,8 };
	int b[9];
	int i = 0;
	int j = 0;
	printf("数组a为:\n");
	for (i = 0; i < 8; ++i) {
		printf("%3d", a[i]);
	}
	printf("\n");
	int b = 5;
	for (i = 0; i < 8; ++i) {
		if (a[i]<b&&a[i + 1]>b) {
		b[i+1]=
		}
	}
	printf("插入后数组b中的元素为;\n");
	 for (i = 0; i < 8; ++i) {
		printf("%3d", a[i]);
	 }
	 printf("\n");     
	 system("pause");
	 return 0;
}