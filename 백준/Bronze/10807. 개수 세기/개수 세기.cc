#include<iostream>
using namespace std;
int main(){
	ios::sync_with_stdio;
	cin.tie(0);
	int a[100] = {0};
	int N,t,cnt=0;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> a[i];
	}
	cin >> t;
	for (int i = 0; i < N; i++) {
		if (a[i] == t)
			cnt++;
	}
	cout << cnt << "\n";
	return 0;
}