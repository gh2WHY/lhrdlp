//统计int型数据，一个int型数据占4个字节，32个比特位，所以共有32个0 1来表示一个整型数据
#include<stdio.h> 
#include<stdlib.h>
int BitOneCount(int n) {
	int count = 0;
	for (int i = 0; i < 32; ++i) {
		if (n&(i << i)) {
			count++;
		}
	}
	return count;
}
int main() {
	int n = -10;
	printf("  %d\n", BitOneCount(n));
	system("pause");
	return 0;

}
//方法2
//int main() {
//	int num = -10;
//	int i = 0;
//	int count = 0;
//	while (num) {
//		count++;
//		num = num & (num - 1);
//	}
//	printf("  %d\n", count);
//	system("pause");
//	return 0;
//}