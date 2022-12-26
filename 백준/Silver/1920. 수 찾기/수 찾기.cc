#include <iostream>
#include<vector>
#include <map>

using namespace std;


int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int N, M;
	map<int, int>m;
	vector<int>v;
	int a;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> a;
		m.insert({ a,0 });
	}
	cin >> M;
	for (int i = 0; i < M; i++) {
		cin >> a;
		if (m.find(a) != m.end())
		{
			v.push_back(1);
		}
		else {
			v.push_back(0);
		}
	}
	int size = v.size();
	for (int i = 0; i < size; i++) {
		cout << v[i] << "\n";
	}
	return 0;
}