#include<iostream>
#include<algorithm>
#define max 100000
using namespace std;
struct map {
	int x;
	string y;
};
struct map maps[max];
bool compare(const map& m1, const map& m2) {
		return m1.x < m2.x;
}
int main() {
	ios::sync_with_stdio;
	cin.tie(0);
	int N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> maps[i].x >> maps[i].y;
	}
	stable_sort(maps, maps + N, compare);
	for (int i = 0; i < N; i++) {
		cout << maps[i].x << " " << maps[i].y << "\n";
	}
}