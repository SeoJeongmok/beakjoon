#include<iostream>
#define sz 101
using namespace std;
int com[sz][sz] = { 0 };
int visit[sz] = { 0 };
int cnt = 0;
int n;
void f(int x) {
	visit[x] = 1;
	for (int i = 1; i <= n; i++) {
		if (com[x][i] == 1 && visit[i] == 0) {
			cnt++;
			visit[i] = 1;
			f(i);
		}
	}
}
int main() {
	int p;
	cin >> n;
	cin >> p;
	for (int i = 0; i < p; i++) {
		int x, y;
		cin >> x >> y;
		com[x][y] = 1;
		com[y][x] = 1;
	}
	f(1);
	cout << cnt << endl;
}