#include<iostream>
using namespace std;
int main() {
	ios::sync_with_stdio;
	cin.tie(0);
	int N, M;
	int a[101][101];
	int b[101][101];
	int sum[101][101];
	cin >> N >> M;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cin >> a[i][j];
		}
	}
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cin >> b[i][j];
		}
	}
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			sum[i][j] = a[i][j] + b[i][j];
		}
	}
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cout << sum[i][j] << " ";
		}
		cout << "\n";
	}
	return 0;
}