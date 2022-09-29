#include<iostream>
#include<vector>
using namespace std;


int main() {
	int testcase;
	cin >> testcase;
	for (int t = 0; t < testcase; t++) {
		vector<int> v;
		int N,z;
		long long sum = 0,max=0;
		cin >> N;
		for (int i = 0; i < N; i++) {
			cin >> z;
			v.push_back(z);
		}
		for (int i = N-1; 0<=i; i--) {
			if (max <= v[i]) {
				max = v[i];
			}
			else {
				sum += max - v[i];
			}
		}
		cout << sum<<"\n";
	}
	return 0;
}