#include<stdio.h>
long long a[102] = { 0 };
long long pado(int n) {
	if (n <= 5)
		return a[n];
	if (a[n-1] == 0)
		pado(n - 1);
	a[n] = a[n-1] + a[n-5];
	return a[n];
}
int main() {
	int t,n;
	a[0] = 0;
	a[1] = 1;
	a[2] = 1;
	a[3] = 1;
	a[4] = 2;
	a[5] = 2;
	scanf("%d", &t);
	for (int i = 0; i < t; i++) {
		scanf("%d", &n);
		printf("%lld\n", pado(n));
	}
}