#include<stdio.h>
int main()
{
	int N,A,B,D;
	scanf("%d", &N);
	if ((N == 4) || (N == 7))
		printf("-1");
	else if (N % 5 == 0)
		printf("%d", N / 5);
	else
	{
		D = N / 5;
		A = N % 5;
		while (A != 0)
		{
			if (A == 1)
			{
				A = A + 5;
				D = D - 1;
				B = A / 3;
				A = A % 3;
			}
			else if (A == 2)
			{
				A = A + 10;
				D = D - 2;
				B = A / 3;
				A = A % 3;
			}
			else if (A == 3)
			{
				B = A / 3;
				A = A % 3;
			}
			else if (A == 4)
			{
				A = A + 5;
				D = D - 1;
				B = A / 3;
				A = A % 3;
			}
		}
		printf("%d", D + B);
	}
	return 0;
}
