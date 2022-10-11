#include<iostream>
#include<queue>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int N;
	int num;
	priority_queue<int,vector<int>,greater<int>>q;
	cin >> N;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cin >> num;
			if (N <= q.size()) {
				if (num > q.top()) {
					q.push(num);
					q.pop();
				}
			}
			else {
				q.push(num);
			}
		}
	}
	cout << q.top();
	return 0;
}