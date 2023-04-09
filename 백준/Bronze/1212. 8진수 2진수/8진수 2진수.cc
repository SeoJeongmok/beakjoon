#include <iostream>
#include <string>

using namespace std;

int main(void) {

	string s;
	string t[8] = { "000", "001", "010", "011", "100", "101", "110", "111" };
	int temp;
	cin >> s;
	int l = s.length();
	for (int i = 0; i < l; i++) {
		temp = s[i] - '0';
		if (i == 0) cout << stoi(t[temp]);
		else cout << t[temp];
	}
}