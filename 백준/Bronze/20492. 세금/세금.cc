#include<iostream>
using namespace std;
int main() {
	ios::sync_with_stdio;
	cin.tie(0);
	int a;
	cin >> a;
	int b = (a * 22) / 100;
	b = a - b;
	int c = (a * 8) / 10;
	int d = a - c;
	int e = (d * 22) / 100;
	c = c + d - e;
	cout << b << " " << c;
	return 0;
}