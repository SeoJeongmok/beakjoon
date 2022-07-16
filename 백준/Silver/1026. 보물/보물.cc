#include <iostream>
#include <algorithm>
#define sz 51
using namespace std;
int main() {
    int n;
    int a[sz] = {0};
    int b[sz] = {0};
    int s=0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }
    sort(a, a + n);
    sort(b, b + n, greater<>());
    for (int i = 0; i < n; i++) {
        s += a[i] * b[i];
    }
    cout << s << endl;
    return 0;
}