#include<stdio.h>
int main()
{
	int n, a=2;
	scanf("%d", &n);
	while (n!=1)
	{
		if (n % a == 0)
		{
			printf("%d\n", a);
			n = n / a;
		}
		else
			a++;
	}
}