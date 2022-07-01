#include<stdio.h>
#include<string.h>
int main()
{
	int n, size, c, count =0;
	char a[1001][101];
	char copy[2][101] = {0};
	char temp;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%s", a[i]);
	}
	size = strlen(a[0]);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < size / 2; j++) {
			temp = a[i][j];
			a[i][j] = a[i][size - 1 - j];
			a[i][size - 1 - j] = temp;
		}
	}
	for (int i = 0; i < size; i++)
	{
		c = 0;
		count++;
		for (int j = 0; j < n; j++) {
			for (int k = j + 1; k < n; k++) {
				strncpy(copy[0], a[j], count);
				strncpy(copy[1], a[k], count);
				if (strcmp(copy[0],copy[1])==0) {
					c = 1;
					break;
				}
			}
			if (c == 1)
				break;
		}
		if (c == 0)
			break;
	}
	printf("%d\n", count);
}