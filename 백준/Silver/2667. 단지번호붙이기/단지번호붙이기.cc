#include<iostream>
#include<algorithm>
#define sz 26
using namespace std;
char map[sz][sz] = { 0 };
int visitD[sz][sz] = { 0 };
int dx[4] = { 0,0,-1,1 };
int dy[4] = { 1,-1,0,0 };
int N;
int a[676] = { 0 };
int cnt = 0;
void DFS(int x, int y) {
    visitD[x][y] = 1;
    for (int i = 0; i < 4; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];
        if (nx < 0 || N <= nx || ny < 0 || N <= ny)
            continue;
        else if (map[nx][ny] == '1' && visitD[nx][ny] == 0) {
            cnt++;
            DFS(nx, ny);
        }
    }
}
int main() {
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> map[i];
    }
    int d = 0;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (map[i][j] == '1' && visitD[i][j] == 0) {
                cnt++;
                DFS(i, j);
                a[d] = cnt;
                d++;
                cnt = 0;
            }
        }
    }
    cout << d << endl;
    sort(a, a + d);
    for (int i = 0; i < d; i++) {
        cout << a[i] << endl;
    }
    return 0;
}
