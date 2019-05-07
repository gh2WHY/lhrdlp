#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int Menu() {
	printf("*****************\n");
	printf("   1  开始游戏   \n");
	printf("   0  结束游戏   \n");
	printf("*****************\n");
	int choice = 0;
	scanf("%d", &choice);
	return choice;
}
#define MAX_ROW 3
#define MAX_COL 3
char chess_board[MAX_ROW][MAX_COL];
void Init() {
	int row = 0;
	int col = 0;
	for (row = 0; row < MAX_ROW; ++row) {
		for (col = 0; col < MAX_ROW; ++col) {
			chess_board[row][col] = ' ';
		}
	}
}
void Print() {
	for (int row = 0; row < MAX_ROW; ++row) {
		printf("| %c | %c | %c |\n", chess_board[row][0], chess_board[row][1], chess_board[row][2]);

		printf("|___|___|___|\n");

	}
	printf("\n");
}
void PlayerMove() {
	int row;
	int col;
	while (1) {
		printf("请输入一组坐标(row,col):\n");
		scanf("%d %d", &row, &col);
		if (col < 0 || row < 0 || row >= MAX_ROW || col >= MAX_COL) {
			printf("您的输入有误，请重新输入！\n");
			continue;
		}
		if (chess_board[row][col] != ' ') {
			printf("该位置已有子，请重新输入！\n");
			continue;
		}
		chess_board[row][col] = 'x';
		break;
	}
}
void ComputerMove() {
	srand((unsigned int)time(0));
	int row;
	int col;
	while (1) {
		row = rand() % MAX_ROW;
		col = rand() % MAX_COL;
		if (chess_board[row][col] != ' ') {
			continue;
		}
		chess_board[row][col] = 'o';
		break;
	}
}
int IsFull() {
	for (int row = 0; row < MAX_ROW; ++row) {
		for (int col = 0; col < MAX_COL; ++col) {
			if (chess_board[row][col] == ' ') {
				return 0;
			}
		}
	}
	return 1;
}
char Check() {
	int row;
	int col;
	for (row = 0; row < MAX_ROW; ++row) {
		//检查所有行
		if (chess_board[row][0] == chess_board[row][1] && chess_board[row][0] == chess_board[row][2]) {
			return chess_board[row][0];
		}
	}
	for (col = 0; col < MAX_COL; ++col) {
		//检查所有列
		if (chess_board[0][col] == chess_board[1][col] && chess_board[0][col] == chess_board[2][col]) {
			return chess_board[0][col];
		}
	}
	//检查对角线
	if (chess_board[0][0] == chess_board[1][1] && chess_board[0][0] == chess_board[2][2]) {
		return chess_board[0][0];
	}
	if (chess_board[0][2] == chess_board[1][1] && chess_board[0][2] == chess_board[2][0]) {
		return chess_board[0][2];
	}
	if (IsFull()) {
		return '1';
	}
	return ' ';
}
void Game() {
	Init();
	Print();
	while (1) {
		if (Check() == '1') {
			printf("和棋\n");
			break;
		}
		PlayerMove();
		system("cls");
		Print();
		if (Check() == 'x') {
			printf("玩家胜\n");
			break;
		}
		ComputerMove();
		system("cls");
		Print();
		if (Check() == 'o') {
			printf("电脑胜\n");
			break;
		}
	}
}
int main() {
	while (1) {
		int choice = Menu();
		system("cls");
		if (choice == 1) {
			Game();
			break;
		}
		else if (choice == 0) {
			printf("再见了您嘞!\n");
			break;
		}
		else {
			printf("您的输入有误，请重新输入!\n");
		}
	}
	system("pause");
	return 0;
}
