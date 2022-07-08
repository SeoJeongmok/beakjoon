#include<iostream>
#include<map>
using namespace std;
int main() {
	map<string, string>map;
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	int n, m;
	string ad, ps;
	string f;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> ad >> ps;
		map.insert(make_pair(ad, ps));
	}
	for (int i = 0; i < m; i++) {
		cin >> f;
		cout << map.find(f)->second<<"\n";
	}
}