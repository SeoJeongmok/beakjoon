# include <stdio.h>
int main() {
	int N,M=0,a,b,c, d, e, f, g, count=0;
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		a = M / 1000000;
		b = (M % 1000000) / 100000;
		c = (M % 100000)/10000;
		d = (M % 10000) / 1000;
		e = (M % 1000) / 100;
		f = (M % 100)/10;
		g = M % 10;
		if (N == M + a + b + c+d+e+f+g){
			count = 1;
			printf("%d\n", M);
			break;
		}
		M++;
	}
	if (count == 0) {
		printf("0\n");
	}
	return 0;
}