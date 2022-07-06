#include <stdio.h>
#define sz 1000000
int a[sz] = { 0 };
int s[sz] = { 0 };
void mergeSort(int left, int right);
void merge(int left, int mid, int right);
long long count = 0;
int main() {
    int N;
    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &a[i]);
    }
    mergeSort(0, N-1);
    printf("%lld\n", count);
    return 0;
}
void mergeSort(int left, int right) {
    int mid;
    if (left < right) {
        mid = (left + right) / 2;
        mergeSort(left,mid);
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
			count += (mid - s1 + 1);
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