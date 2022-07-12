#include<iostream>
using namespace std;
int main() {
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	int A, B, V, d=0;
	cin >> A >> B >> V;
	d = (V - A) / (A - B);
	if ((V - A) % (A - B) != 0)
		d++;
	if (A >= V)
		cout << 1;
	else
		cout << d+1;
	return 0;
}