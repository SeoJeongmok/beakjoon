#include<stdio.h>
int main()
{
	int n, count = 99, a, b, c;
	scanf("%d", &n);
	if (n <= 99)
	{
		printf("%d", n);
	}
	else {
		for (int i = 100; i <= n; i++)
		{
			a = i / 100;
			b = (i / 10) % 10;
			c = (i%100)%10;
			if (a + c == 2 * b)
			{
				count++;
			}
		}
		printf("%d", count);
	}
}