#include<stdio.h>
#include<stdlib.h>
int main()
{
	int j = 0;
	for (int year = 1900; year <= 2000; year++)
	{
		if ((year % 4 == 0 && year % 100 != 0)|| (year % 400 == 0 && year % 100 == 0))
		{
			j++;
			printf("%5d", year);
		}
		if (j % 5 == 0)
			printf("\n");
		
	}
	system("pause");
}