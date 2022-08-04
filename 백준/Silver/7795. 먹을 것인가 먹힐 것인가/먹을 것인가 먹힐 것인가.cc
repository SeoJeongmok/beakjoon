#include<iostream>
#include<algorithm>
#define sz 20000
using namespace std;
int main() {
	ios::sync_with_stdio;
	cin.tie(0);
	int T;
	cin >> T;
	for (int i = 0; i < T; i++) {
		int N, M;
		int a[sz];
		int b[sz];
		int cnt = 0;
		cin >> N >> M;
		for (int j = 0; j < N; j++) {
			cin >> a[j];
		}
		for (int j = 0; j < M; j++) {
			cin >> b[j];
		}
		sort(a, a + N);
		sort(b, b + M);
		for (int j = 0; j < N; j++) {
			for (int k = 0; k < M; k++) {
				if (b[k] < a[j]) {
					cnt++;
				}
				else break;
			}
		}
		cout << cnt << "\n";
	}
	return 0;
}