# include <stdio.h>
int main() {
	int N, K,sum1=1,sum2=1,sum3=1;
	scanf("%d", &N);
	scanf("%d", &K);
	for (int i = 1; i <= N; i++) {
		sum1=sum1* i;
	}
	for (int i = 1; i <= K; i++) {
		sum2 = sum2 * i;
	}
	for (int i = 1; i <= N-K; i++) {
		sum3 = sum3 * i;
	}
	printf("%d\n", sum1 / (sum2*sum3));
	return 0;
}