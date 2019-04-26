//第一次学着调试程序，本程序出错的原因解释入下
//调试时监视变量i,arr[10],arr[11],arr[12]的地址
//在调试时观察到arr[12]的地址i的地址相同
//因为在程序执行到i=12时又给i赋值为0.又开始进入循环
#include<stdio.h>
#include<stdlib.h>
int main() {
	int i = 0;
	int arr[10] = { 0 };
	
	for (i = 0; i <10; i++) {
		arr[i] = 0;
		printf("hehe\n");
		
	}
	system("pause");
	return 0;
	
}