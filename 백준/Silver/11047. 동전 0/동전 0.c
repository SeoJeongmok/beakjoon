# include <stdio.h>
int main() {
	int N, K, a[11],count=0;
	scanf("%d", &N);
	scanf("%d", &K);
	for (int i = 0; i < N; i++) {
		scanf("%d", &a[i]);
	}
	for (int i = N - 1; i >= 0; i--) {
		while (K - a[i] >= 0) {
			K = K - a[i];
			count++;
		}
	}
	printf("%d\n", count);
	return 0;
}