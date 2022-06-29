# include <stdio.h>
int main() {
	int T, H, W, N, y, x;
	scanf("%d", &T);
	for (int i = 0; i < T; i++) {
		scanf("%d", &H);
		scanf("%d", &W);
		scanf("%d", &N);
		y = N % H;
		x = N / H + 1;
		if (N % H == 0) {
			y = H;
			x = N / H;
		}
		if (x < 10) {
			y = y * 10;
		}
		printf("%d%d\n", y, x);
	}
	return 0;
}