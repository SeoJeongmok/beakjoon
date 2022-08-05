#include<iostream>
#include<algorithm>
using namespace std;
int main() {
	ios::sync_with_stdio;
	cin.tie(0);
	int S=0, T=0;
	for (int i = 0; i < 4; i++) {
		int a;
		cin >> a;
		S += a;
	}
	for (int i = 0; i < 4; i++) {
		int a;
		cin >> a;
		T += a;
	}
	cout << max(S, T) << "\n";
	return 0;
}