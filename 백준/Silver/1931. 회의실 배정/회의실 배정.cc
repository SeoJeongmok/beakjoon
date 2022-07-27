#include<iostream>
#include<algorithm>
#define max 100000
using namespace std;
struct time {
	long start;
	long end;
};
struct time times[max];
bool compare(const time &t1,const time &t2) {
	if (t1.end == t2.end)
		return t1.start < t2.start;
	else
		return t1.end < t2.end;
}
int main() {
	int N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> times[i].start >> times[i].end;
	}
	sort(times, times + N, compare);
	long temp = times[0].end;
	long cnt = 1;
	for (int i = 1; i < N; i++) {
		if (temp <= times[i].start) {
			cnt++;
			temp = times[i].end;
		}
	}
	cout << cnt << endl;
}