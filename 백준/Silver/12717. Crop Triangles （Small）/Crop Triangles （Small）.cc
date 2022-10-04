#include<iostream>
#include<vector>
#include<algorithm>
#include<utility>
using namespace std;


int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);
	int N;
	cin >> N;
	for (int t = 1; t <= N; t++) {
		vector<pair<long long,long long>> v;
		long long n, A, B, C, D, x0, y0, M, answer=0;
		cin >> n >> A >> B >> C >> D >> x0 >> y0 >> M;
		v.push_back(pair<long long, long long>(x0, y0));
		long long x = x0;
		long long y = y0;
		for (int i = 0; i < n - 1; i++) {
			x = (A * x + B) % M;
			y = (C * y + D) % M;
			v.push_back(pair<long long, long long>(x, y));
		}
		int s = v.size();
		for (int i = 0; i < s-2; i++) {
			for (int j = i + 1; j < s - 1; j++) {
				for (int k = j + 1; k < s; k++) {
					int a = (v[i].first + v[j].first + v[k].first) % 3;
					int b = (v[i].second + v[j].second + v[k].second) % 3;
					if (a == 0 && b == 0)
						answer++;
				}
			}
		}
		cout << "Case #"<< t << ": "<<answer<< "\n";
	}
	return 0;
}