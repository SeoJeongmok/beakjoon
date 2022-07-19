#include<iostream>
using namespace std;
int main() {
	int in, out, sum=0, max=0;
	for (int i = 0; i < 4; i++) {
		cin >> out >> in;
		sum = sum - out;
		if (max < sum)
			max = sum;
		sum = sum + in;
		if (max < sum)
			max = sum;
	}
	cout << max;
}