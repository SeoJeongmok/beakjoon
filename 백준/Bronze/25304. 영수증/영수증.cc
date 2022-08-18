#include<iostream>
using namespace std;
int main() {
	long x;
	cin >> x;
	int N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		long a;
		int b;
		cin >> a >> b;
		a *= b;
		x -= a;
	}
	if (x == 0)
		cout << "Yes\n";
	else
		cout << "No\n";
	return 0;
}