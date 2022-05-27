#include<stdio.h>
int main()
{
	int a[6],sum=0;
	for (int i = 0; i < 5; i++)
	{
		scanf("%d", &a[i]);
	}
	for (int i = 0; i < 5; i++) 
	{
		sum=sum+a[i] * a[i];
	}
	printf("%d",sum % 10);
}