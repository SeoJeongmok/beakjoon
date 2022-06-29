# include <stdio.h>
# include <string.h>
int main() {
	char a[6];
	int len,c;
	while (1) {
		scanf("%s", a);
		len = strlen(a);
		c = 0;
		if (*a == '0')
			break;
		for (int i = 0; i < len / 2; i++) {
			if (a[i] != a[len - 1 - i]) {
				c = 1;
				printf("no\n");
				break;
			}
		}
		if (c == 0)
			printf("yes\n");
	}
	return 0;
}