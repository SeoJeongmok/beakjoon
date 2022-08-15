#include<iostream>
#include<algorithm>
using namespace std;
int main() {
	ios::sync_with_stdio;
	cin.tie(0);
	int a[3];
	string s;
	for (int i = 0; i < 3; i++) {
		cin >> a[i];
	}
	cin >> s;
	sort(a, a + 3);
	for (int i = 0; i < 3; i++) {
		cout << a[s[i] - 'A']<<" ";
	}
	return 0;
}