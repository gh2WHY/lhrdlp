#include<stdio.h>
#include<stdlib.h>
//int main() {
//	int a[4] = { 2,3,9,4 };
//	int to_find = 7;
//	int i;
//	for (i = 0; i < 4; i++) {
//		if (a[i] == to_find) {
//			break;
//		}
//	}
//	if (i == 4) {
//		printf("û�ҵ�!\n");
//	}
//	else {
//		printf("�ҵ���!\n");
//	}
//	system("pause");
//	return 0;
//}
//���ַ�����
int main() {
	int a[4] = { 0,2,6,7 };
	int mid;
	int left = 0;
	int to_find = 9;
	int right = sizeof(a) / sizeof(a[0]) - 1;
	while (left <= right) {
		mid = (left + right) / 2;
		if (to_find < mid) {
			right = mid-1;
		}
		else if(to_find>mid) {
			left = mid+1;
		}
		else if (to_find ==mid) {
			
			break;
		}
	}
	if (left <= right) {
		printf("�ҵ���!\n");
	}
	else {
		printf("û�ҵ�!\n");
	}
	system("pause");
	return 0;
}