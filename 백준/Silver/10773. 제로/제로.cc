#include<iostream>
#include<stack>
using namespace std;
int main() {
	stack<int> s;
	int k,n,sum=0;
	cin >> k;
	for (int i = 0; i < k; i++) {
		cin >> n;
		if (n == 0)
			s.pop();
		else
			s.push(n);
	}
	if(!s.empty()){
		while (!s.empty()) {
			sum = sum + s.top();
			s.pop();
		}
	}
	cout << sum << "\n";
	return 0;
}