# include <stdio.h>
int main() {
	int N, num, a[10001] = {0};
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		scanf("%d", &num);
		a[num]++;
	}
	for (int i = 0; i < 10001; i++) {
		for (int j = 0; j < a[i]; j++)
			printf("%d\n", i);
	}
	return 0;
}