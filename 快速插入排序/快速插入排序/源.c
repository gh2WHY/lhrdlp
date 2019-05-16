#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdlib.h>
int  main()
{
	int a[11] = { 1,2,3,4,5,6,7,8,9,10 };
	int number, i, j;
	scanf("%d", &number);
	if (number > a[9])
		a[10] = number;
	else
	{
		for (i = 0; i < 10; i++)
			if (a[i] > number)
			{
				for (j = 10; j > i; j--)
					a[j] = a[j - 1];
				a[i] = number;
				break;
			}
	}
	for (i = 0; i < 11; i++)
		printf("%3d", a[i]);
	printf("\n");
	system("pause");
	return 0;
}
