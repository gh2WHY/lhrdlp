#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int menu() {
	printf("************\n");
	printf("************\n");
	printf(" 1.��ʼ��Ϸ\n");
	printf(" 0.�˳���Ϸ\n");
	printf("************\n");
	printf("************\n");
	printf("����������ѡ��\n");
	int choice = 0;
	scanf("%d", &choice);
	return choice;
}
//����һ�������
//��ʾ�û�����һ������
//���û���������ֽ��бȽ�
//�������,��ʾ�û�����.����.�¶���
void Game() {
	srand((unsigned int)(time(0)));
	int to_guess = rand() % 100 + 1;
		while (1) {
			printf("���������µ�����\n");
			int n = 0;
			scanf("%d", &n);
			if (n> to_guess) {
				printf("����\n");
			}
			else if (n < to_guess) {
				printf("����\n");
			}
			else {
				printf("�¶���\n");
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
				printf("�ټ�!\n");
			}
			else {
				printf("��������,����������!\n");
			}
		}
		system("pause");
		return 0;
	}