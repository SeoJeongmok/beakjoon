#include<iostream>
#include<vector>

using namespace std;

int main() {
	ios::sync_with_stdio;
	cin.tie(0);
	vector<int>v;
	v.push_back(1);
	v.push_back(2);
	int n;
	cin >> n;
	for (int i = 2; i < n; i++) {
		v.push_back((v[i - 1] + v[i - 2])%10007);
	}
	cout << v[n - 1];
	return 0;
}