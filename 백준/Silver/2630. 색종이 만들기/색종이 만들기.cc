#include<iostream>
#define sz 130
using namespace std;
int a[sz][sz] = { 0 };
int cnt[2] = { 0,0};
void paper(int x, int y, int n) {
	int c = 0;
	int f = a[x][y];
	for (int i = x; i < x + n; i++) {
		for (int j = y; j < y + n; j++) {
			if (f != a[i][j]) {
				c = 1;
				break;
			}
		}
	}
	if (c == 0) {
		cnt[f]++;
	}
	else {
		for (int i = x; i < x + n; i += n / 2) {
			for (int j = y; j < y + n; j += n / 2) {
				paper(i, j, n / 2);
			}
		}
	}
}
int main() {
	int N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cin >> a[i][j];
		}
	}
	paper(0, 0, N);
	for (int i = 0; i < 2; i++)
		cout << cnt[i] << endl;
}