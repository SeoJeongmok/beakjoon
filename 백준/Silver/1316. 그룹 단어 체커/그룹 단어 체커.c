#include<stdio.h>
#include<string.h>
int main() {
	int n;
	scanf("%d",&n);
	int cnt = n;
	for (int i = 0; i < n; i++) {
		char a[101] = { 0 };
		char check = '0';
		int al[26] = { 0 };
		int len;
		scanf("%s", a);
		len = strlen(a);
		for (int j = 0; j < len; j++) {
				if (check != a[j])
				{
					check = a[j];
					al[a[j] - 'a'] += 1;
				}

				if (al[a[j] - 'a'] == 2)
				{
					cnt -= 1;
					break;
				}
		}
	}
	printf("%d\n", cnt);
	return 0;
}