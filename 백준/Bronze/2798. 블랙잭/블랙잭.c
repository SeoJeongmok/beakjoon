# include <stdio.h>
int main() {
	int N, M, a[101],temp,max=0;
	scanf("%d", &N);
	scanf("%d", &M);
	for (int i = 0; i < N; i++)
		scanf("%d", &a[i]);
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N - 1; j++) {
			if (a[j] < a[j + 1]) {
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}
	for (int i = 0; i < N-2; i++) {
		for (int j = i+1; j < N-1; j++) {
			for (int k = j+1; k < N; k++) {
				temp = a[i] + a[j] + a[k];
				if (temp > max&& temp <= M)
					max = temp;
				if (max == M)
					break;
			}
		}
	}
	printf("%d\n", max);
	return 0;
}