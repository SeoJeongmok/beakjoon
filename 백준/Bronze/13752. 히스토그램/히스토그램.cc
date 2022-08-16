#include<iostream>
using namespace std;
int main() {
	ios::sync_with_stdio;
	cin.tie(0);
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int k;
		cin >> k;
		for (int j = 0; j < k; j++) {
			cout << "=";
		}
		cout << "\n";
	}
	return 0;
}