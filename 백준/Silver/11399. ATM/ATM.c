# include <stdio.h>
int main() {
	int N, a[1001], temp, sum=0;
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		scanf("%d", &a[i]);
	}
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N - 1; j++) {
			if (a[j] > a[j + 1]) {
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}
	for (int i = 0; i < N; i++) {
		for (int j = 0; j <= i; j++) {
			sum = sum + a[j];
		}
	}
	printf("%d\n", sum);
	return 0;
}