//ͳ��int�����ݣ�һ��int������ռ4���ֽڣ�32������λ�����Թ���32��0 1����ʾһ����������
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
//����2
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