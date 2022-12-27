#include <iostream>
#include<vector>

using namespace std;


int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	vector<pair<int, int>>v;
	int N, x, y, r=1;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> x >> y;
		v.push_back({ x,y });
	}
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (v[i].first < v[j].first && v[i].second < v[j].second)
				r++;
		}
		cout << r << " ";
		r = 1;
	}
	return 0;
}