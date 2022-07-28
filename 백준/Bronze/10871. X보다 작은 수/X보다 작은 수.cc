#include<stdio.h>
#include<string.h>
int main()
{
	int n, x, a[10001];
	scanf("%d %d", &n, &x);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	for (int j = 0; j < n; j++)
	{
		if (a[j] < x)
			printf("%d ", a[j]);
	}
}