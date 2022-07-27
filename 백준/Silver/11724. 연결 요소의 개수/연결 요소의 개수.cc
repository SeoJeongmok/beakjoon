#include<iostream>
#define sz 1001
using namespace std;
int g[sz][sz] = { 0 };
int visit[sz] = { 0 };
int N, M;
void f(int x) {
	visit[x] = 1;
	for (int i = 1; i <= N; i++) {
		if (g[x][i] == 1 && visit[i] == 0) {
			f(i);
		}
	}
}
int main() {
	cin >> N >> M;
	int cnt = 0;
	for (int i = 0; i < M; i++) {
		int x, y;
		cin >> x >> y;
		g[x][y] = 1;
		g[y][x] = 1;
	}
	for (int i = 1; i <= N; i++) {
			if (visit[i] == 0) {
				cnt++;
				f(i);
			}
	}
	cout << cnt << endl;
}