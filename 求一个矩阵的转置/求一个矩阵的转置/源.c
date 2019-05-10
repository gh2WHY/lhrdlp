#define ROW 3
#define COL 3
#include<stdio.h>
#include<stdlib.h>
void convert(int a[ROW][COL]) {
	int row = 0;
	int col = 0;
	int t = 0;
	printf("转置之后的矩阵为：\n");
	for (row = 0; row < ROW; ++row) {
		for (col = 0; col < COL; ++col) {
			t = a[row][col];
			a[row][col] = a[col][row];
			a[col][row] = t;
			printf("%5d", a[row][col]);
		}
		printf("\n");
	}


}
int main() {
	int a[ROW][COL] = { 1,2,3,4,5,6,7,8,9 };
	int row = 0;
	int col = 0;
	printf("该矩阵为:\n");
	for (row = 0; row < ROW; ++row) {
		for (col = 0; col < COL; ++col) {
			printf("%5d", a[row][col]);
		}
		printf("\n");
	}
	convert(a);
	system("pause");
	return 0;
}
