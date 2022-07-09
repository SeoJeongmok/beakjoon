#include <iostream>
#define sz 1000000
int a[sz] = { 0 };
int s[sz] = { 0 };
using namespace std;
void mergeSort(int left, int right);
void merge(int left, int mid, int right);
int main() {
    cin.tie(NULL);
	ios::sync_with_stdio(false);
	int N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> a[i];
	}
	mergeSort(0, N - 1);
	for (int i = 0; i < N; i++) {
		cout << a[i] <<"\n";
	}
	return 0;
}
void mergeSort(int left, int right) {
	int mid;
	if (left < right) {
		mid = (left + right) / 2;
		mergeSort(left, mid);
		mergeSort(mid + 1, right);
		merge(left, mid, right);
	}
}
void merge(int left, int mid, int right) {
	int s1 = left, s2 = mid + 1, k = left;
	while (s1 <= mid && s2 <= right) {
		if (a[s1] <= a[s2]) {
			s[k++] = a[s1++];
		}
		else {
			s[k++] = a[s2++];
		}
	}
	if (s1 <= mid) {
		for (int i = s1; i <= mid; i++)
			s[k++] = a[i];
	}
	else {
		for (int i = s2; i <= right; i++)
			s[k++] = a[i];
	}
	for (int i = left; i <= right; i++)
		a[i] = s[i];
}