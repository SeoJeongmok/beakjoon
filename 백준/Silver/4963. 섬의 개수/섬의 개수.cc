#include<iostream>
using namespace std;
int map[50][50];
int visit[50][50];
int w, h;
int dy[] = { 0,0,-1,1,-1,-1,1,1 };
int dx[] = { 1,-1,0,0,-1,1,-1,1 };
void reset() {
	for (int i = 0; i < h; i++) {
		for (int j = 0; j < w; j++) {
			map[i][j] = 0;
			visit[i][j] = 0;
		}
	}
}
void DFS(int y, int x) {
	visit[y][x] = 1;
	for (int i = 0; i < 8; i++) {
		int nx = x + dx[i];
		int ny = y + dy[i];
		if (nx<0 || ny<0 || nx>=w || ny>=h)
			continue;
		if (map[ny][nx] == 1 && visit[ny][nx] == 0)
			DFS(ny, nx);
	}
}
int main() {
	while (true) {
		reset();
		cin >> w >> h;
		if (w == 0 && h == 0)
			break;
		for (int i = 0; i < h; i++) {
			for (int j = 0; j < w; j++) {
				cin >> map[i][j];
			}
		}
		int cnt = 0;
		for (int i = 0; i < h; i++) {
			for (int j = 0; j < w; j++) {
				if (map[i][j] == 1 && visit[i][j] == 0) {
					DFS(i, j);
					cnt++;
				}
			}
		}
		cout << cnt << endl;
	}
	return 0;
}