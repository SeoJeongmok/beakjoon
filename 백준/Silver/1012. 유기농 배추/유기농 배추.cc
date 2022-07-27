#include<iostream>
#define sz 51
using namespace std;
int map[sz][sz] = { 0 };
int visit[sz][sz] = { 0 };
int dx[4] = { 0,0,1,-1 };
int dy[4] = { 1,-1,0,0 };
int M, N, K;
void DFS(int x, int y) {
	visit[x][y] = 1;
	for (int i = 0; i < 4; i++) {
		int nx = x + dx[i];
		int ny = y + dy[i];
		if (nx < 0 || N <= nx || ny < 0 || M <= ny)
			continue;
		else if (map[nx][ny] == 1 && visit[nx][ny] == 0)
			DFS(nx, ny);
	}
}
void reset() {
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			visit[i][j] = 0;
			map[i][j] = 0;
		}
	}
}
int main() {
	int T;
	cin >> T;
	while (T--) {
		cin >> M >> N >> K;
		for (int i = 0; i < K; i++) {
			int x, y;
			cin >> x >> y;
			map[y][x] = 1;
		}
		int cnt = 0;
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < M; j++) {
				if (map[i][j] == 1 && visit[i][j] == 0) {
					DFS(i, j);
					cnt++;
				}
			}
		}
		cout << cnt << endl;
		reset();
	}
	return 0;
}