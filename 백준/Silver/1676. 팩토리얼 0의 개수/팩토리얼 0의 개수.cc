#include<iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	int cnt = 0;
	for (int i = 1; i <= n; i++) {
		int t = i;
		int c = 0;
		while (t % 5 == 0) {
			t /= 5;
			c++;
		}
		cnt += c;
	}
	cout << cnt << "\n";
	return 0;
}