#include <iostream>
#include<vector>
#include <map>
#include<string>

using namespace std;


int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int N, M;
	map<string, int>m;
	vector<string>v;
	string a;
	cin >> N >> M;
	for (int i = 1; i <= N; i++) {
		cin >> a;
		m.insert({ a,i });
		v.push_back(a);
	}
	for (int i = 0; i < M; i++) {
		cin >> a;
		auto iter = m.find(a);
		if (iter != m.end())
		{
			cout << iter->second << "\n";
		}
		else {
			int t = stoi(a);
			cout << v[t - 1] << "\n";
		}
	}
	return 0;
}