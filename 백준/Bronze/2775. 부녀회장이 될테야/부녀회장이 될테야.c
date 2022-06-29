# include <stdio.h>
int main() {
	int T, k, n,a[15],b[15];
	scanf("%d", &T);
	b[0] = 1;
	for (int i = 0; i < T; i++) {
		scanf("%d", &k);
		scanf("%d", &n);
		for (int i = 0; i < n; i++) {
			a[i] = i + 1;
		}
		for (int j = 0; j < k; j++) {
			for (int l = 1; l < n; l++) {
				b[l] = b[l - 1] + a[l];
			}
			for (int l = 0; l < n; l++) {
				a[l] = b[l];
			}
		}
		printf("%d\n", b[n - 1]);
	}
	return 0;
}