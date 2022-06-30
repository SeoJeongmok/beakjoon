# include <stdio.h>
int main() {
	int N, a[101], count = 0,c=0;
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		scanf("%d", &a[i]);
		if (a[i] == 1||a[i]==0)
			continue;
		c = 0;
		for (int j = 2; j <= a[i]; j++) {
			if (a[i] % j == 0) {
				if (a[i] == j) {
					count++;
				}
				else
					break;
			}
		}
	}
	printf("%d\n", count);
	return 0;
}