#include<iostream>
#include<algorithm>
#include<vector>
#include<cstdio>
using namespace std;
int map[26][26];
bool check[26][26];
vector<int>v;
int n;
int cnt = 0;
int dir[4][2] = { {-1,0},{1,0} ,{0,1},{0,-1} };
void DFS(int x, int y) {
	for (int i = 0; i < 4; i++) {
		int nx = x + dir[i][0];
		int ny = y + dir[i][1];
		if (nx >= 0 && nx <= n && ny >= 0 && ny <= n) {
			if (check[nx][ny] == false && map[nx][ny] == 1) {
				check[nx][ny] = true;
				cnt++;
				DFS(nx, ny);
			}
		}
	}
}
int main() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		string input;
		cin >> input;
		for (int j = 0; j < n; j++) {
			map[i][j] = input.at(j) - '0';
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (map[i][j] == 1 && check[i][j] == false) {
				check[i][j] = true;
				cnt++;
				DFS(i, j);
				v.push_back(cnt);
				cnt = 0;
			}
		}
	}
	cout << v.size() << endl;
	sort(v.begin(), v.end());
	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << endl;
	}
}