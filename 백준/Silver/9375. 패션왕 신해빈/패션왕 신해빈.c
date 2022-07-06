#include<stdio.h>
#include<string.h>
int main() {
	int t,n;
	scanf("%d", &t);
	for (int i = 0; i < t; i++) {
		char s[2][20]={0};
		char kind[30][30] = { 0 };
		int num[30] = { 0 }, size = -1,sum=1;
		scanf("%d", &n);
		for (int j = 0; j < n; j++) {
			int c = 0;
			for (int k = 0; k < 2; k++) {
				scanf("%s", s[k]);
			}
			for (int k = 0; k <= size+1; k++) {
				if (strcmp(s[1], kind[k]) == 0) {
					c = 1;
					num[k]=num[k]+1;
					break;
				}
			}
			if (c == 0) {
				strcpy(kind[++size], s[1]);
				num[size]=+1;
			}
		}
		for (int j = 0; j <= size; j++) {
			sum = sum * (num[j]+1);
		}
		printf("%d\n", sum - 1);
	}
}