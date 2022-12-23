#include <iostream>
#include <vector>

using namespace std;


int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int M, x, s=0;
	string o;
	cin >> M;
	for (int i = 0; i < M; i++) {
		cin >> o;
		if (o == "add") {
			cin >> x;
			s = s | (1 << x);
		}
		else if (o == "remove") {
			cin >> x;
			s = s & ~(1 << x);
		}
		else if (o == "check") {
			cin >> x;
			if (s & (1 << x)) {
				cout << 1 << "\n";
			}
			else {
				cout << 0 << "\n";
			}
		}
		else if (o == "toggle") {
			cin >> x;
			s = s ^ (1 << x);
		}
		else if (o == "all") {
			s = (1 << 21) - 1;
		}
		else if (o == "empty") {
			s = 0;
		}
	}
}