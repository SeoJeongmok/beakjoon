#include <algorithm>
#include <iostream>
#include <utility>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int N;
    cin >> N;
    for (int t = 1; t <= N; t++) {
        long long cnt[3][3] = {0};
        long long n, A, B, C, D, x0, y0, M, answer = 0;
        cin >> n >> A >> B >> C >> D >> x0 >> y0 >> M;
        vector<pair<int, int>> z;
        for (int i = 0; i < 3; i++)
            for (int j = 0; j < 3; j++)
                z.push_back({ i,j });
        cnt[x0 % 3][y0 % 3]++;
        long long x = x0, y = y0;
        for (int i = 0; i < n - 1; i++) {
            x = (A * x + B) % M;
            y = (C * y + D) % M;
            cnt[x % 3][y % 3]++;
        }
        for (int i = 0; i < 9; i++) {
            for (int j = i; j < 9; j++) {
                for (int k = j; k < 9; k++) {
                    if ((z[i].first + z[j].first + z[k].first) % 3 == 0 && (z[i].second + z[j].second + z[k].second) % 3 == 0)
                    {
                        if (i == j && i == k)
                        {
                            if (cnt[z[i].first][z[i].second] == 0)
                                continue;
                            answer += cnt[z[i].first][z[i].second] * (cnt[z[j].first][z[j].second] - 1) * (cnt[z[k].first][z[k].second] - 2) / 6;
                        }
                        else
                            answer += cnt[z[i].first][z[i].second] * cnt[z[j].first][z[j].second] * cnt[z[k].first][z[k].second];
                    }
                }
            }
        }
        cout << "Case #" << t << ": " << answer << "\n";
    }
    return 0;
}