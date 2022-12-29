#include<iostream>
#include<vector>

using namespace std;

int main() {
	ios::sync_with_stdio;
	cin.tie(0);
	int N, cnt=0;
	cin >> N;
	vector<int>v(N + 2);
	v[1] = 0;
	v[2] = 1;
	v[3] = 1;
	v[4] = 2;
    for (int i = 5; i <= N; i++) {
        if (i % 2 != 0 && i % 3 != 0)
            v[i] = v[i - 1] + 1;
        else if (i % 2 == 0 && i % 3 == 0)
            v[i] = min(v[i / 2] + 1, v[i / 3] + 1);
        else if (i % 2 == 0)
            v[i] = min(v[i / 2] + 1, v[i - 1] + 1);
        else if (i % 3 == 0)
            v[i] = min(v[i / 3] + 1, v[i - 1] + 1);
    }
    cout << v[N];
	return 0;
}