#include<iostream>
#include<algorithm>
#define sz 301
using namespace std;
int main() {
	int a[sz] = { 0 };
	int dp[sz] = { 0 };
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	dp[0] = a[0];
	dp[1] = a[0] + a[1];
	dp[2] = max(a[0], a[1]) + a[2];
	for (int i = 3; i < n; i++) {
		dp[i] = max(dp[i-2],dp[i-3]+a[i-1]) + a[i];
	}
	cout << dp[n - 1] << endl;
	return 0;
}