#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main() {
	int score;
	printf("«Î ‰»Îƒ„µƒ≥…º®\n");
	scanf("%d", &score);
	if (score < 60) {
		printf("E\n");
	}
	else if (score >= 60 && score < 70) {
		printf("D\n");
	}
	else if (score >= 70 && score < 80) {
		printf("C\n");
	}
	else if (score >= 80 && score < 90) {
		printf("B\n");
	}
	else if (score >= 90) {
		printf("A\n");
	}
	system("pause");
	return 0;

}
