#include<iostream>
using namespace std;
int main() {
	ios::sync_with_stdio;
	cin.tie(0);
	string s;
	int a, w;
	while (1) {
		cin >> s >> a >> w;
		if (s == "#" && a == 0 && w == 0)
			break;
		if (a > 17 || w >= 80) {
			cout << s << " " << "Senior" << "\n";
		}
		else
			cout << s << " " << "Junior" << "\n";
	}
	return 0;
}