#include<iostream>
using namespace std;
int fack(int x) {
	if (x == 1)
		return 1;
	return x * fack(x - 1);
}
int main() {
	ios::sync_with_stdio;
	cin.tie(0);
	int n;
	cin >> n;
	if (n != 0)
		cout << fack(n) << "\n";
	else
		cout << "1\n";
	return 0;
}