#include<iostream>
#include<vector>
using namespace std;

int main() {
	ios::sync_with_stdio();
	cin.tie(0);
	int N, M;
	cin >> N;
	cin >> M;
	string s;
	cin >> s;
	vector<int>v;
	int cnt = 0;
	int answer = 0;
	for (int i = 0; i < M-2; i++) {
		if (s[i] == 'I') {
			if (s[i + 1] == 'O' && s[i + 2] == 'I')
				cnt++;
			else {
				v.push_back(cnt);
				cnt = 0;
			}
		}
	}
	v.push_back(cnt);
	for (int i = 0; i < v.size(); i++) {
		if (v[i] >= N) {
			answer += 1;
			answer += v[i] - N;
		}
	}
	cout << answer;
	return 0;
}