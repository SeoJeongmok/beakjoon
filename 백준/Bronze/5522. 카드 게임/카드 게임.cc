#include<iostream>
#include<vector>

using namespace std;

int main() {
	ios::sync_with_stdio;
	cin.tie(0);
	int N , s=0;
	for (int i = 0; i < 5; i++) {
		cin >> N;
		s = s + N;
	}
	cout << s << "\n";
    return 0;
}