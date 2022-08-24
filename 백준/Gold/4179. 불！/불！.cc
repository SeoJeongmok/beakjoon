#include<iostream>
#include<queue>
#include<utility>

#define X first
#define Y second
#define sz 1002

using namespace std;

string map[sz];
int fire[sz][sz];
int jihun[sz][sz];
int visit_f[sz][sz] = { 0 };
int visit_j[sz][sz] = { 0 };
int dx[4] = { 0,0,1,-1 };
int dy[4] = { -1,1,0,0 };
int R, C;

queue<pair<int, int> > Q1;
queue<pair<int, int> > Q2;

void BFS_f() {
	while (!Q1.empty()) {
		auto cur = Q1.front(); Q1.pop();
		for (int dir = 0; dir < 4; dir++) {
			int nx = cur.X + dx[dir];
			int ny = cur.Y + dy[dir];
			if (nx < 0 || nx >= R || ny < 0 || ny >= C)
				continue;
			if (fire[nx][ny] >= 0 || map[nx][ny] == '#')
				continue;
			fire[nx][ny] = fire[cur.X][cur.Y] + 1;
			Q1.push({ nx,ny });
		}
	}
}

int BFS_j() {
	while (!Q2.empty()) {
		auto cur = Q2.front(); Q2.pop();
		for (int dir = 0; dir < 4; dir++) {
			int nx = cur.X + dx[dir];
			int ny = cur.Y + dy[dir];
			if (nx < 0 || nx >= R || ny < 0 || ny >= C) {
				return (jihun[cur.X][cur.Y] + 1);
			}
			if (jihun[nx][ny] >= 0 || map[nx][ny] == '#') 
				continue;
			if (fire[nx][ny] != -1 && fire[nx][ny] <= jihun[cur.X][cur.Y] + 1) 
				continue;
			jihun[nx][ny] = jihun[cur.X][cur.Y] + 1;
			Q2.push({ nx,ny });
		}
	}
	return -1;
}

int main() {
	ios::sync_with_stdio;
	cin.tie(0);
	cin >> R >> C;
	for (int i = 0; i < R; i++) {
		fill(fire[i], fire[i] + C, -1);
		fill(jihun[i], jihun[i] + C, -1);
	}
	for (int i = 0; i < R; i++)
		cin >> map[i];
	for (int i = 0; i < R; i++) {
		for (int j = 0; j < C; j++) {
			if (map[i][j] == 'F') {
				Q1.push({ i,j });
				fire[i][j] = 0;
			}
			if (map[i][j] == 'J') {
				Q2.push({ i,j });
				jihun[i][j] = 0;
			}
		}
	}
	BFS_f();
	int ans = BFS_j();
	if (ans == -1)
		cout << "IMPOSSIBLE" << "\n";
	else
		cout << ans << "\n";
	return 0;
}