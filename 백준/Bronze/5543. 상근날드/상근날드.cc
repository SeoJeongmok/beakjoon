#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main() {
	ios::sync_with_stdio;
	cin.tie(0);
	vector<int>a;
	vector<int>b;
	for (int i = 0; i < 3; i++) {
		int c;
		cin >> c;
		a.push_back(c);
	}
	for (int i = 0; i < 2; i++) {
		int c;
		cin >> c;
		b.push_back(c);
	}
	int mina = *min_element(a.begin(), a.end());
	int minb = *min_element(b.begin(), b.end());
	cout << mina + minb - 50;
    return 0;
}