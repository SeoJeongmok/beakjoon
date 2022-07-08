#include<stdio.h>
#include<string.h>
int main()
{
	int n, k, a = 1, b[5001], c, d = 1;
	scanf("%d %d", &n, &k);
	for (int i = 0; i < n; i++)
	{
		b[i] = a;
		a++;
	}
	c = a - 1;
	printf("<");
	while (1)
	{
		for (int i = 0; i < c; i++)
		{
			if (d % k == 0)
			{
				printf("%d", b[i]);
				if (c != 1)
					printf(", ");
				for (int j = i; j < c; j++)
				{
					if (j == c - 1)
						break;
					b[j] = b[j + 1];
				}
				d = d - k;
				c = c - 1;
				i = i - 1;
			}
			d++;
		}
		if (c == 0)
		{
			printf(">");
			break;
		}
	}
}