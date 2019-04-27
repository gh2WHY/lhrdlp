#include<stdio.h>
#include<stdlib.h>
int main() {
	int  n = 0;
	int f1 = 1;
	int f2 = 1;
	int f3 = 0;
	for (n = 1; n <= 20; n++) {
		printf("%12d%12d", f1, f2);
	
		if (n%2==0) {
			printf("\n");
			printf("\n");

		}
		f1 = f1+f2;
		f2 = f2 + f1;
		
	}
	
	
	printf("\n");
	system("pause");
	return 0;
}