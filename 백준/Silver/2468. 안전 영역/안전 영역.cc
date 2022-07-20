#include<iostream>
#define sz 101
using namespace std;
int map[sz][sz] = { 0 };
int visit[sz][sz] = { 0 };
int dx[4] = { -1,1,0,0 };
int dy[4] = { 0,0,-1,1 };
int N;
void DFS(int x, int y) {
	visit[x][y] = 1;
	for (int i = 0; i < 4; i++) {
		int nx = x + dx[i];
		int ny = y + dy[i];
		if (nx < 0 || N < nx || ny < 0 || N < ny)
			continue;
		else {
			if (map[nx][ny] != 0 && visit[nx][ny] == 0) {
				DFS(nx, ny);
			}
		}
	}
}
int main() {
	int  max = 1, h = 1, maxh = 0;
	cin >> N;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cin >> map[i][j];
			if (maxh < map[i][j])
				maxh = map[i][j];
		}
	}
	while (h <= maxh) {
		int cnt = 0;
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < N; j++) {
				if (map[i][j] < h) {
					map[i][j] = 0;
				}
				visit[i][j] = 0;
			}
		}
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < N; j++) {
				if (map[i][j] != 0 && visit[i][j] == 0) {
					DFS(i, j);
					cnt++;
				}
			}
		}
		if (max <= cnt)
			max = cnt;
		h++;
	}
	cout << max << endl;
	return 0;
}