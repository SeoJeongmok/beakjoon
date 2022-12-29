#include<iostream>

using namespace std;

long long fibo[41] = { 0,1, };

int fibonacci(int n) {
	if (n == 0 || n == 1) {
		return fibo[n];
	}
	else if (fibo[n] == 0)
		fibo[n] = fibonacci(n - 1) + fibonacci(n - 2);
	return fibo[n];
}

int main() {
	ios::sync_with_stdio;
	cin.tie(0);
	int T;
	cin >> T;
	for (int i = 0; i < T; i++) {
		int N;
		cin >> N;
		if (N == 0)
			cout << 1 << " " << 0 << "\n";
		else
			cout << fibonacci(N-1) << " " << fibonacci(N) << "\n";
	}
	return 0;
}