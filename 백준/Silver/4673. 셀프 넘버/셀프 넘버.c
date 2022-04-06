#include<stdio.h>
int main()
{
	int a[10000],num;
	for (int i = 1; i <= 10000; i++)
	{
		a[i-1] = i;
	}
	for (int i = 1; i <= 10000; i++)
	{
		if (i < 100)
		{
			num = i + i / 10 + i % 10;
			for (int j = 0; j < 10000; j++)
			{
				if (num == a[j])
					a[j] = 0;
			}
		}
		else if (i < 1000)
		{
			num = i + i / 100 + (i % 100) / 10 + i % 10;
			for (int j = 0; j < 10000; j++)
			{
				if (num == a[j])
					a[j] = 0;
			}
		}
		else if (i < 10000)
		{
			num = i + i / 1000 + (i % 1000) / 100 + (i % 100) / 10 + i % 10;
			for (int j = 0; j < 10000; j++)
			{
				if (num == a[j])
					a[j] = 0;
			}
		}
	}
	for (int i = 0; i < 10000; i++)
	{
		if (a[i] |= 0)
			printf("%d\n", a[i]);
	}
}