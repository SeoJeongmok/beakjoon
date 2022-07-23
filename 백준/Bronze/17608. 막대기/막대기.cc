#include<iostream>
#include<stack>
using namespace std;
int main() {
	stack<int>st;
	int n,a,h=0,cnt=0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin>>a;
		st.push(a);
	}
	while (!st.empty()) {
		int temp = st.top();
		if (h < temp) {
			cnt++;
			h = temp;
		}
		st.pop();
	}
	cout << cnt << endl;
	return 0;
}