//在整形有序数组中查找,即折半查找
//找到了返回元素下标值,找不到返回-1
#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main() {
	int a[5] = { 0,1,2,6,7 };
	int to_find = 0;
	printf("请输入要查找的数字:\n");
	scanf("%d", &to_find);
	int left = 0;
	int right = sizeof(a) / sizeof(int) - 1;
	
	while (left <= right) {
		int mid = (left + right) / 2;
		if (to_find < a[mid]) {
			right = mid - 1;
		}else if (to_find > a[mid]) {
			left = mid + 1;
		}if (to_find == a[mid]) {
			printf("找到了\n");
			printf("该数字的下标为%d\n", mid);
			break;
		}
	}
	if (left > right) {
		printf("-1\n");
	}
	system("pause");
	return 0;
}