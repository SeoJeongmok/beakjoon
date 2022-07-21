#include<iostream>
using namespace std;
int main() {
	int T;
	cin >> T;
	for (int i = 0; i < T; i++) {
		int v, e,a;
		cin >> v >> e;
		a = e - v + 2;
		cout << a << endl;
	}
	return 0;
}