#include<iostream>
#include<vector>
#include<algorithm>
#define sz 20000
using namespace std;
bool compare(string s1, string s2) {
	if (s1.length() == s2.length())
		return s1 < s2;
	else
		return s1.length() < s2.length();
}
int main() {
	ios::sync_with_stdio;
	cin.tie(0);
	vector<string>v;
	string s;
	int N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> s;
		if(find(v.begin(),v.end(),s)==v.end())
		v.push_back(s);
	}
	sort(v.begin(), v.end(), compare);
	for (int i = 0; i < v.size(); i++) {
		cout<< v[i]<<"\n";
	}
}