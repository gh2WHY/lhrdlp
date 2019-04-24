#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int menu() {
	printf("************\n");
	printf("************\n");
	printf(" 1.开始游戏\n");
	printf(" 0.退出游戏\n");
	printf("************\n");
	printf("************\n");
	printf("请输入您的选择\n");
	int choice = 0;
	scanf("%d", &choice);
	return choice;
}
//产生一个随机数
//提示用户输入一个数字
//与用户输入的数字进行比较
//若不相等,提示用户高了.低了.猜对了
void Game() {
	srand((unsigned int)(time(0)));
	int to_guess = rand() % 100 + 1;
		while (1) {
			printf("请输入您猜的数字\n");
			int n = 0;
			scanf("%d", &n);
			if (n> to_guess) {
				printf("高了\n");
			}
			else if (n < to_guess) {
				printf("低了\n");
			}
			else {
				printf("猜对了\n");
				break;
			}
		}
}
	int main() {
		while (1) {
			
			int choice = menu();
			if (choice == 1) {
				Game();
			}
			else if (choice == 0) {
				printf("再见!\n");
			}
			else {
				printf("输入有误,请重新输入!\n");
			}
		}
		system("pause");
		return 0;
	}