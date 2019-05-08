#include<stdio.h>
# include<stdlib.h>
int main() {
	int n;
	int x, y, z;
	for (n = 0; n <=999; ++n) {
	
			x = n % 10;
			y = (n / 10) % 10;
			z = (n / 100) % 10;
		
		if (x *x*x + y * y*y + z * z*z==n) {
			printf("%5d", n);
		}	
	}
	printf("\n");
	system("pause");
	return 0;

}