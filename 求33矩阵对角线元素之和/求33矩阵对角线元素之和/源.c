#include<stdio.h>
#include<stdlib.h>
int  main() {
	int a[3][3] = { 1,2,3,4,5,6,7,8,9 };
	int row = 0;
	int col = 0;
	printf("��3*3�ľ���Ϊ\n");
	for (row = 0; row < 3; ++row) {
		for (col = 0; col < 3; ++col) {
			printf("%5d", a[row][col]);
		}
		printf("\n");
	}
	//�����Խ���Ԫ��֮��
	//���ȷ���Խ����ϵ�Ԫ��
	int sum1 = 0;
	int sum2 = 0;
	for (row = 0,col=0; row < 3,col<3; ++row,++col) {
			sum1 += a[row][col];	
	}
	for (row = 2, col = 2; row>=0, col >=0; --row, --col) {
		sum2 += a[row][col];
	}
	printf("���Խ���Ԫ��֮��Ϊ%d\n", sum1);
	printf("���Խ���Ԫ��֮��Ϊ%d\n", sum2);
	system("pause");
	return 0;
}