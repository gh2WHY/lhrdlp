#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main() {
	int a, b, c, d;
	int t;
	printf("ÇëÊäÈë4¸öÊýa¡¢b¡¢c¡¢d\n");
	scanf("%d%d%d%d",&a, &b, &c, &d);
	if (a > b) {
		t = a;
		a = b;
		b = t;
	}
	if (a > c) {
		t = a; 
		a = c; 
		c = t;
	}
	if (a > d) {
		t = a; 
		a = d; 
		d = t;
	}
	if (b > c) {
		t = b; 
		b = c; 
		c = t;
	}
	if (b > d) {
		t = b; 
		b = d; 
		d = t;
	}if (c > d) {
		t = c; 
		c = d; 
		d = t;
	}
	printf("%d %d %d %d\n", a, b, c, d);
	system("pause");
	return 0;
}