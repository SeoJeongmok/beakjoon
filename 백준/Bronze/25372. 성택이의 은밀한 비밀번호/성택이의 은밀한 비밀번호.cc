#include<iostream>
#include<vector>

using namespace std;

int main() {
	ios::sync_with_stdio;
	cin.tie(0);
	string s;
	int N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> s;
		int l = s.length();
		if (6 <= l && l <= 9)
			cout << "yes\n";
		else
			cout << "no\n";
	}
    return 0;
}