#include<stdio.h>
#include<stdlib.h>
int  main() {
	int a[3][3] = { 1,2,3,4,5,6,7,8,9 };
	int row = 0;
	int col = 0;
	printf("该3*3的矩阵为\n");
	for (row = 0; row < 3; ++row) {
		for (col = 0; col < 3; ++col) {
			printf("%5d", a[row][col]);
		}
		printf("\n");
	}
	//求矩阵对角线元素之和
	//如何确定对角线上的元素
	int sum1 = 0;
	int sum2 = 0;
	for (row = 0,col=0; row < 3,col<3; ++row,++col) {
			sum1 += a[row][col];	
	}
	for (row = 2, col = 2; row>=0, col >=0; --row, --col) {
		sum2 += a[row][col];
	}
	printf("主对角线元素之和为%d\n", sum1);
	printf("辅对角线元素之和为%d\n", sum2);
	system("pause");
	return 0;
}