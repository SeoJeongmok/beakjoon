#include<iostream>
#include<math.h>

using namespace std;

int main() {
	ios::sync_with_stdio;
	cin.tie(0);
	int N;
	int r, c;
	int t = 0;
	cin >> N >> r >> c;
	int N2 = pow(2, N);
	while (2 < N2 ) {
		int m = N2 / 2;
		int r1 = r % N2;
		int c1 = c % N2;
		if (r1 < m && c1 < m) {//1
			t = t + 0;
		}
		else if (r1 < m && m <= c1) {//2
			t = t + (m * m);
		}
		else if (m <= r1 && c1 < m) {//3
			t = t + (m * m * 2);
		}
		else if (m <= r1 && m <= c1) {//4
			t = t + (m * m * 3);
		}
		N2 = N2/2;
		if (m <= r)
			r = r - m;
		if (m <= c)
			c = c - m;
	}
	if (r == 0 && c == 1)
		t = t + 1;
	else if (r == 1 && c == 0)
		t = t + 2;
	else if (r == 1 && c == 1)
		t = t + 3;
	cout<<t;
	return 0;
}