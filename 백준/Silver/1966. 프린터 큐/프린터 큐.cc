#include<iostream>
#include<queue>

using namespace std;

int main() {
	ios::sync_with_stdio();
	cin.tie(0);
	int test_case;
	cin >> test_case;
	for (int t = 0; t < test_case; t++) {
		int N, M, level, cnt =0;
		cin >> N >> M;
		queue<pair<int, int>>q;
		priority_queue<int>p;
		for (int i = 0; i < N; i++) {
			cin >> level;
			q.push({ i, level });
			p.push(level);
		}
		while (!q.empty()) {
			int idex = q.front().first;
			int val = q.front().second;
			q.pop();
			if (p.top() == val) {
				p.pop();
				cnt++;
				if (idex == M) {
					cout << cnt << "\n";
					break;
				}
			}
			else
				q.push({ idex,val });
		}
	}
}