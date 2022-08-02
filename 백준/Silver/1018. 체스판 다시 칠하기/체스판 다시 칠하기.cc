#include<iostream>
#include<algorithm>
using namespace std;
string w[8] = {
	"WBWBWBWB",
	"BWBWBWBW",
	"WBWBWBWB",
	"BWBWBWBW",
	"WBWBWBWB",
	"BWBWBWBW",
	"WBWBWBWB",
	"BWBWBWBW"
};
string b[8] = {
	"BWBWBWBW",
	"WBWBWBWB",
	"BWBWBWBW",
	"WBWBWBWB",
	"BWBWBWBW",
	"WBWBWBWB",
	"BWBWBWBW",
	"WBWBWBWB"
};
string board[50];
int wc(int x, int y) {
	int cnt = 0;
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			if (board[x + i][y + j] != w[i][j]) {
				cnt++;
			}
		}
	}
	return cnt;
}
int bc(int x, int y){
	int cnt = 0;
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			if (board[x + i][y + j] != b[i][j]) {
				cnt++;
			}
		}
	}
	return cnt;
}
int main() {
	ios::sync_with_stdio;
	cin.tie(0);
	int N, M;
	cin >> N >> M;
	int mini = 64;
	for (int i = 0; i < N; i++) {
		cin >> board[i];
	}
	for (int i = 0; i <= N - 8; i++) {
		for (int j = 0; j <= M - 8; j++) {
			int temp = min(wc(i, j), bc(i, j));
			if (temp < mini) {
				mini = temp;
			}
		}
	}
	cout << mini << "\n";
	return 0;
}