#include<iostream>
#include<list>
using namespace std;
int main() {
	list<char>list;
	int m;
	string s;
	cin >> s;
	for (int i = 0; i < s.length(); i++) {
		list.push_back(s[i]);
	}
	cin >> m;
	auto cur = list.end();
	for (int i = 0; i < m; i++) {
		char c;
		cin >> c;
		if (c == 'L') {
			if (cur != list.begin())
				cur--;
		}
		else if (c == 'D') {
			if (cur != list.end())
				cur++;
		}
		else if (c == 'B') {
			if (cur != list.begin()) {
				cur--;
				cur = list.erase(cur);
			}
		}
		else if (c == 'P') {
			char add;
			cin >> add;
			list.insert(cur, add);
		}
	}
	for (auto cr : list)
		cout << cr;
}