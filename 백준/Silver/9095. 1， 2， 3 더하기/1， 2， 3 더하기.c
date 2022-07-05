#include<stdio.h>
int a[14] = { 0 };
int sol(int n) {
	int sum = 0;
	if (n <= 3) {
		return a[n];
	}
	if (a[n-1] == 0) {
		sol(n - 1);
	}
	a[n] = a[n - 1] + a[n - 2] + a[n - 3];
	return a[n];
}
int main() {
	int t,N;
	a[0] = 0;
	a[1] = 1;
	a[2] = 2;
	a[3] = 4;
	scanf("%d", &t);
	for (int i = 0; i < t; i++) {
		scanf("%d", &N);
		printf("%d\n", sol(N));
	}
}