#include<iostream>
#include<algorithm>
using namespace std;
int main() {
	ios::sync_with_stdio;
	cin.tie(0);
	int a[3];
	for (int i = 0; i < 3; i++) {
		cin >> a[i];
	}
	sort(a, a + 3);
	if (a[2] + a[0] + a[1]!=180) {
		cout << "Error" << "\n";
	}
	else if(a[2]==a[0]&&a[0]==a[1]) {
		cout << "Equilateral" << "\n";
	}
	else if (a[0]==a[1]||a[0]==a[2]||a[1]==a[2]) {
		cout << "Isosceles" << "\n";
	}
	else {
		cout << "Scalene" << "\n";
	}
	return 0;
}