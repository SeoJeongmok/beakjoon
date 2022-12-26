#include <iostream>
#include <map>

using namespace std;


int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int N, M, cnt=0;
	map<string, int>m;
	map<string, int>m1;
	string s;
	cin >> N >> M;
	for (int i = 0; i < N; i++) {
		cin >> s;
		m.insert({ s,0 });
	}
	for (int i = 0; i < M; i++) {
		cin >> s;
		if (m.find(s) != m.end())
		{
			cnt++;
			m1.insert({ s, 0 });
		}
	}
	cout << cnt << "\n";
	for (auto iter = m1.begin(); iter != m1.end(); iter++)
	{
		cout << iter->first << "\n";
	}
	return 0;
}