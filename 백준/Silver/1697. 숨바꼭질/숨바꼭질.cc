#include<iostream>
#include<queue>
#include<utility>

#define sz 100002

using namespace std;

int map[sz] = { 0 };
int visit[sz] = { 0 };
int N, K;

queue<int>que;

int main() {
	ios::sync_with_stdio;
	cin.tie(0);
	cin >> N >> K;
	que.push(N);
	visit[N] = 1;
	while (visit[K]==0) {
		int it = que.front();
		que.pop();
		for (int nxt : {it - 1, it + 1, 2 * it}) {
			if (nxt<0 || nxt>sz)
				continue;
			if (visit[nxt] == 0) {
				map[nxt] = map[it] + 1;
				que.push(nxt);
				visit[nxt] = 1;
			}
		}
	}
	cout << map[K];
    return 0;
}