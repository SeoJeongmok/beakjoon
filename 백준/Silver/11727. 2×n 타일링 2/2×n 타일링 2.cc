#include<iostream>
#include<vector>

using namespace std;

int main() {
	ios::sync_with_stdio;
	cin.tie(0);
	int N;
	int m = 10007;
	cin >> N;
	vector<int>v(N + 1);
	v[0] = 0;
	v[1] = 1;
	v[2] = 3;
	for (int i = 3; i <= N; i++) {
		v[i] = (v[i - 1] + v[i - 2] * 2) % m;
	}
	cout << v[N];
	return 0;
}