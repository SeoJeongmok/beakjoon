#include<iostream>
#include<queue>
using namespace std;
int main() {
	queue<int>q;
	int n,c=1,temp=1;
	cin >> n;
	for (int i = 1; i < n+1; i++) {
		q.push(i);
	}
	while (!q.empty()) {
		if (c % 2 == 1) {
			q.pop();
		}
		else {
			temp = q.front();
			q.pop();
			q.push(temp);
		}
		c++;
	}
	cout << temp << endl;
}