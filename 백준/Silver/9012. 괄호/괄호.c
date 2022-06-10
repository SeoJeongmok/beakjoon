#include<stdio.h>
int main()
{
	int t;
	scanf("%d", &t);
	for (int i = 0; i < t; i++) {
		char c[51];
		int signal=0;
		int count = 0;
		scanf("%s", c);
		for (int j = 0; j < 51; j++) {
			if (c[j] == '(')  count++;
			else if (c[j] == ')') {
				count--;
				if (count < 0) {
					signal = 1;
					printf("NO\n");
					break;
				}
			}
			else break;
		}
		if (signal == 0) {
			if (count == 0) printf("YES\n");
			else printf("NO\n");
		}
	}
}