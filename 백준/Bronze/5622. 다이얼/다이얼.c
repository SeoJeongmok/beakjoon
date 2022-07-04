#include<stdio.h>
#include<string.h>
int main() {
	char s[15] = { 0 };
	int len, a[26] = {0},sum =0;
	scanf("%s", s);
	len = strlen(s);
	for (int i = 0; i < len; i++) {
		for (int j = 0; j < 26; j++) {
			if (s[i] == j+65) {
				a[j] = a[j]+1;
			}
		}
	}
	for (int i = 0; i < 26; i++) {
		if (a[i] != 0) {
			if (i <= 2)
				sum = sum + 3 * a[i];
			else if (i <= 5)
				sum = sum + 4 * a[i];
			else if (i <= 8)
				sum = sum + 5 * a[i];
			else if (i <= 11)
				sum = sum + 6 * a[i];
			else if (i <= 14)
				sum = sum + 7 * a[i];
			else if (i <= 18)
				sum = sum + 8 * a[i];
			else if (i <= 21)
				sum = sum + 9 * a[i];
			else if (i <= 26)
				sum = sum + 10 * a[i]
				;
		}
	}
	printf("%d\n", sum);
}