#include<iostream>
using namespace std;
int main() {
	ios::sync_with_stdio;
	cin.tie(0);
	int A, B;
	cin >> A;
	B = A % 10;
	if (B == 0) {
		B = A % 100;
		A = A / 100;
	}
	else
		A = A / 10;
	cout << A + B;
	return 0;
}