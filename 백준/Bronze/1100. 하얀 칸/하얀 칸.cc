#include <iostream>
using namespace std;
int main() {
    string s;
    char a[9][9] = { 0 };
    int cnt = 0;
    for (int i = 0; i < 8; i++) {
        cin.getline(a[i], 9);
    }
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            if (i % 2 == 0 && j % 2 == 0) {
                if (a[i][j] == 'F')
                    cnt++;
            }
            if (i % 2 != 0 && j % 2 != 0) {
                if (a[i][j] == 'F')
                    cnt++;
            }
        }
    }
    cout << cnt << endl;
    return 0;
}