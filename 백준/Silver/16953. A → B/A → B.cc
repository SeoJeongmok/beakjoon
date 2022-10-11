#include<iostream>
#define ll long long
using namespace std;

int main() {
	ll a, b;
	int cnt = 0;
	int c = 0;
	cin >> a >> b;
	while (a < b) {
		if (b % 2 == 0) {
			b = b / 2;
			cnt++;
		}
		else {
			c = b % 10;
			if (c != 1) {
				break;
			}
			else {
				b = b / 10;
				cnt++;
			}
		}
	}
	if (a == b) {
		cout << cnt+1 << "\n";
	}
	else
		cout << -1 << "\n";
	return 0;
}