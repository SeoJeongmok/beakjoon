#include<stdio.h>
int main()
{
	int a, b, c;
	scanf("%d", &a);
	scanf("%d", &b);
	c = b + (b - a);
	printf("%d", c);
}