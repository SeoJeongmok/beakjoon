#include<iostream>
using namespace std;
int main() {
	ios::sync_with_stdio;
	cin.tie(0);
	long long A, B;
	cin >> A >> B;
	long long sum;
	sum = (A + B) * (A - B);
	cout << sum;
    return 0;
}