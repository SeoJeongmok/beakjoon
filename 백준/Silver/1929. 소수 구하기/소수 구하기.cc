#include<iostream>
#define sz 1000001
using namespace std;
int a[sz] = { 0 };
int main() {
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	int M, N;
	cin >> M >> N;
	a[1] = 1;
	for (int i = 2; i <= N; i++) {
		for (int j = 2; j <= N/i; j++) {
			a[i * j] = 1;
		}
	}
	for (int i = M; i <= N; i++) {
		if (a[i] == 0)
			cout << i << "\n";
	}
	return 0;
}