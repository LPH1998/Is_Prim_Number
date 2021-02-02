#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>

int main()
{
	int i = 0;
	int j = 0;
	for (i = 101; i <= 200; i=i+2)
	{
		for (j = 2; j <=sqrt(i,2); j++)
		{
			if (i%j == 0)
			{
				break;
			}
		}
		if (j>sqrt(i,2))
		{
			printf("%d ", i);
		}
	}
	return 0;
}